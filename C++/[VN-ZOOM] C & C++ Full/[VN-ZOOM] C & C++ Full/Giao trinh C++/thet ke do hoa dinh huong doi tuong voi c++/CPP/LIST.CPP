// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "list.hpp"

List::List()
{
	Head = Tail = p = 0;
}

List::List(const List &l)
{
	Copy (l);
}

void List::operator = (const List &l)
{
	Empty();
	Copy(l);
}

List::~List()
{
	Empty();
}

void List::Copy(const List &l)
{
	Head = 0;
	Tail = 0;
	Node *temp = l.Head;
	while (temp != 0)
	{
		if (Tail == 0)
		{
			Tail = new Node;
			Head = Tail;
			Tail->Next = 0;
			Tail->DataPtr = temp->DataPtr;
		}
		else
		{
			Tail->Next = new Node;
			Tail->Next->Next = 0;
			Tail->Next->DataPtr = temp->DataPtr;
			Tail = Tail->Next;
		}
		temp = temp->Next;
	}
}

void List::Empty()
{
	Node *temp, *hold;
	temp = Head;
	while (temp != 0)
	{
		hold = temp->Next;
		delete temp;
		temp = hold;
	}
}

void List::GoHead()
{
	p = Head;
}

void List::GoNext()
{
	if (p!= 0) p = p->Next;
}

void *List::Seach(void *item)
{
	Node *temp = Head;
	while ((temp != 0) && (item!=temp->DataPtr)) temp = temp->Next;
	return temp;
}

void *List::Examine()
{
	if (p!=0) return p->DataPtr;
	return 0;
}

void List::Insert(void *item)
{
	Node *temp;
	temp = new Node;
	temp->Next = 0;
	temp->DataPtr = item;
	if (Head!= 0) Tail->Next = temp; else Head = temp;
	Tail = temp;
}

void List::Delete()
{
	if (p==Head)
	{
		Remove();
		p = Head;
	}
	else
	{
		Node *tmp = Head;
		while (tmp->Next!=p) tmp = tmp->Next;
		tmp->Next = p->Next;
		delete p;
		p = tmp->Next;
	}
}

void *List::Remove()
{
	if (Head==0) return 0;
	Node *temp = Head->Next;
	void *value= Head->DataPtr;
	delete Head;
	Head = temp;
	return value;
}

static int DefaultMoreThan(void*,void*);

int (*SortList::MoreThan)(void*,void*) = DefaultMoreThan;

int DefaultMoreThan(void*,void*)
{
	return 1;
}

void SortList::SetMoreThan(int (*UserMoreThan)(void*,void*))
{
	MoreThan = UserMoreThan;
}

void SortList::Insert(void *item)
{
	if (Head==0) {List::Insert(item); return;}
	Node *temp = Head;
	if (!MoreThan(item,temp->DataPtr))
	{
		temp = new Node;
		temp->Next = Head;
		temp->DataPtr = item;
		Head = temp;
	}
	else
	{
		while ((temp->Next!=0) && (MoreThan(item, temp->Next->DataPtr)))
			temp = temp->Next;
		if (temp==Tail){List::Insert(item); return;}
		Node *Hold = temp;
		temp = new Node;
		temp->Next = Hold->Next;
		temp->DataPtr = item;
		Hold->Next = temp;
	}
}

void SortList::Merge(SortList &l)
{
	if (l.Head==0) return;
	if (Head==0)
	{
		Head = l.Head;
		Tail = l.Tail;
		l.Tail = 0;
		l.Head = 0;
		return;
	}

	Node *h = 0, *t, *Hold;
	while ((0!=Head) && (0!=l.Head))
	{
		if (MoreThan(Head->DataPtr,l.Head->DataPtr))
		{
			Hold = l.Head;
			l.Head = l.Head->Next;
		}
		else
		{
			Hold = Head;
			Head = Head->Next;
		}
		if (h==0) t = h = Hold; else {t->Next = Hold; t=t->Next;}
	}
	if (Head!=0) t->Next = Head;
	if (l.Head!=0) {t->Next = l.Head; Tail = l.Tail; l.Head = 0;}
	Head = h;
}

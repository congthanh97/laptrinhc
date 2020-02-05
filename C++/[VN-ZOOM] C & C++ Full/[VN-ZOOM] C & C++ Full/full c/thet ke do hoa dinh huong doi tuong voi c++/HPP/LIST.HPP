// Lop danh sach va danh sach duoc sap  
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if ! defined __LIST_HPP
#define __LIST_HPP

class List{
protected:
	struct Node { Node *Next; void *DataPtr; };
	Node *Head, *Tail, *p;
	void Copy(const List &);

public:
	List();
	List(const List &);
	void operator = (const List &);
	~List();
	void GoHead();
	void GoNext();
	virtual void *Examine();
	virtual void *Seach(void *);
	virtual void Insert(void *);
	virtual void *Remove();
	virtual void Delete();
	virtual	void Empty();
};

class SortList: public List{
protected:
	static int (*MoreThan)(void*,void*);
public:
	static void SetMoreThan(int (*UserMoreThan)(void*,void*));
	virtual void Insert(void *);
	void Merge(SortList &);
};

#endif

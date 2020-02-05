// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "interact.hpp"
#include "mouse.hpp"

Mouse mouse;

void Locate_(int &, int &, int &);

void Interact::Locate(int &b, Point &p)
{
	int x, y;
	World2Device(p,x,y);
	Locate_(b,x,y);
	Device2World(x,y,p);
}

void Interact::Stroke(int n, Polyline &p)
{
	Point q;
	int b, i=0;
	while (1)
	{
		Locate(b,q);
		if (b==1)
		{
			p.Set(i,q);
			i++;
			if (i==n) break;
		}
	}
}

void Locate_(int &b, int &x, int &y)
{
	mouse.Show();
	while (!mouse.Event());
	mouse.Hide();
	b = mouse.State();
	x = mouse.Getx();
	y = mouse.Gety();
}

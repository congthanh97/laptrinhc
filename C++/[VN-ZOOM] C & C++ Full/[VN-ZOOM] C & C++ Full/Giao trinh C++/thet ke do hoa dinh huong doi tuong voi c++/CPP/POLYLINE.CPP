// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "model.hpp"

Polyline::Polyline(const Poly<Point> &pl):Model(pl)
{
}

void Polyline::Draw(ViewSys *w)
{
	int n = p.Count();
	w->Moveto(p[0]);
	for (int i=1; i<n; i++) w->Lineto(p[i]);
}
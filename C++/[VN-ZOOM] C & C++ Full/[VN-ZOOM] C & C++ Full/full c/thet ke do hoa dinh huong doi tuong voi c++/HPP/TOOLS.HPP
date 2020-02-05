// Lop cong cu co ban 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __TOOLS_HPP
#define __TOOLS_HPP

#include "window.hpp"

void N_gon(Window &, int);
void N_gon(Window &, int, float, float x = 0, float y = 0, float a = 0 );

void Arc(Window &, const Point &, float, float a = 0, float b = 360, int n = 50);
void Arc(Window &, const Point &, const Point &, float, int n = 50);
void Arcto(Window &, const Point &, const Point &, float, int n = 20);
void Sector(Window &, const Point &, float, float, float, int n = 50);

void Plot(Window &, Point (*)(float), float a = 0, float b = 1, int n = 50);
void PlotPolar(Window &, float (*)(float), float, float, int n = 50);

float Arg(Vector &);

Vector Project(const Vector &, const Vector &);
Vector Perpend(const Vector &, const Vector &);
Vector Reflect(const Vector &, const Vector &);
Vector Bisector(const Vector &, const Vector &);

int Chop(float, float, float &, float &);
float Power(float, float);

#endif

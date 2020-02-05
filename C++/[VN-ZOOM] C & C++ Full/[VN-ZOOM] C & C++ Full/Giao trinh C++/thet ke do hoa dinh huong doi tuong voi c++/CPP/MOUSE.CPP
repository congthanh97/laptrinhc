// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "mouse.hpp"
#include "iostream.h"

int Mouse::state = 0;
int Mouse::x = 0;
int Mouse::y = 0;
int Mouse::b = 0;

Mouse::Mouse()
{
	SetPos(0,0);
	Show();
}

Mouse::~Mouse()
{
	Hide();
}

int Mouse::Event()
{
	_AX = 3;
	geninterrupt(0x33);
	if ((state == _BX) && (x == _CX) && (y == _DX))
		return 0;
	x = _CX;
	y = _DX;
	state = _BX;
	return 1;
}

int Mouse::State()
{
	return state;
}

int Mouse::Getx()
{
	return x;
}

int Mouse::Gety()
{
	return y;
}

void Mouse::SetRange(int x1, int y1, int x2, int y2)
{
	_AX = 0x07;
	_CX = x1;
	_DX = x2;
	geninterrupt(0x33);
	_AX = 0x08;
	_CX = y1;
	_DX = y2;
	geninterrupt(0x33);
}

void Mouse::SetPos(int X, int Y)
{
	_AX = 4;
	_BX = 0;
	_CX = x = X;
	_DX = x = Y;
	geninterrupt(0x33);
}

void Mouse::Show()
{
	_AX = 1;
	geninterrupt(0x33);
}

void Mouse::Hide()
{
	_AX = 2;
	geninterrupt(0x33);
}
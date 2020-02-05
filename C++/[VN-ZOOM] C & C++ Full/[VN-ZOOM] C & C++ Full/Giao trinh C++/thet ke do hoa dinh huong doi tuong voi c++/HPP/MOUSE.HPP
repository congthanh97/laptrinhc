// Lop thiet bi chuot 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __MOUSE_HPP
#define __MOUSE_HPP

extern"C"{
#include "dos.h"
}

class Mouse {
private:
	static int state, x, y, b;

public:
	Mouse();
	~Mouse();

	void SetRange(int, int, int, int);
	void SetPos(int, int);
	void Show();
	void Hide();

	int Event();
	int State();
	int Getx();
	int Gety();
};

#endif

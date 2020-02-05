// Lop canh quan 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __SCENE_HPP
#define __SCENE_HPP

#include "instance.hpp"

class Scene{
protected:
	int numobj;
	Instance **obj;
	Point *source;
	Camera *c;
	int Shade2(const Point&, Instance*, const Point&, Instance*);
private:
	int Shade(const Point&, Instance*, const Point&, Instance*);
	int InShadow(const Ray&);
	Instance *Ray_1(const Ray&, float&);

public:
	Scene(int, Instance **, Point *,	Camera *);
	void Draw();
};

#endif
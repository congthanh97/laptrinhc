// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "scene.hpp"

static int maxray = 10;
static int raynum = 0;

Scene::Scene(int num, Instance **o, Point *s,	Camera *C)
{
	numobj = num;
	obj = o;
	source = s;
	c = C;
}

void Scene::Draw()
{
	Point e = c->Eye();

	int l = (getmaxx()-getmaxy())/2 + 50,
		r = getmaxx() - l,
		b = 50,
		t = getmaxy() - b;

	for (int j=b; j<t; j++)
		for (int i=l; i<r; i++)
		{
			raynum = 0;
			Point p;
			c->Device2World(i,j,p);
			Ray ray = Ray(e,p);
			float t = -1;
			Instance *tmp = Ray_1(ray,t);
			p = ray(t);
			int shade = Shade(e,0,p,tmp);
			putpixel(i,j,shade);
			if (kbhit()) break;
		}
}

int Scene::Shade(const Point& gpt, Instance* gobj, const Point& spt, Instance* sobj)
{
	//tham khao trang 363
}

int Scene::InShadow(const Ray& ray)
{
	float t;
	for (int i=0; i<numobj; i++)
	{
		t = -1;
		if (BestTime(obj[i]->Hit(ray),t))
			return 1;
	}
	return 0;
}

Instance *Scene::Ray_1(const Ray& ray, float& t)
{
	if (raynum==maxray) return 0;
	Instance *tmp = 0;
	t = -1;
	for (int i=0; i<numobj; i++)
		if (BestTime(obj[i]->Hit(ray),t))
			tmp = obj[i];
	return tmp;
}


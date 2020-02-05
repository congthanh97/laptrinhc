// Lop camera tiep can quan sat 3D 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __CAMERA_HPP
#define __CAMERA_HPP

#include "viewsys.hpp"
#include "volume.hpp"

class Camera : public ViewSys{
protected:
	Affine  T;
	Vector e;
	virtual void Map();
	virtual void MapTotal();

public:
	Camera();
	Camera(const Vector&, const Vector&, const Vector&);
	Camera(const Vector&, const Vector&, const Vector&, const Vector&);
	Camera(const Vector&, const Vector&, const Vector&, const Vector&, const Viewport&);
	Camera(const Vector&, const Vector&, const Vector&, const Vector&, const Volume&);

	virtual void Device2View(int, int, Point &);
	virtual	void View2Device(const Point &, int &, int &);

	void Line(const Point &, const Point &);
	void Axis();
	Point Eye();
};

#endif
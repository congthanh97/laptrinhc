// Lop nguyen hinh 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __GENPRIMI_HPP
#define __GENPRIMI_HPP

#include "curves.hpp"
#include "surfaces.hpp"
#include "plane.hpp"

int BestTime(float t, float &);

class GenCircle: public Curve{
public:
	virtual Point operator()(float);
	virtual float Hit(const Ray&);
	virtual Vector Norm(const Point &);
};

class GenSphere: public Surface{
public:
	virtual Point operator()(float, float);
	virtual float Hit(const Ray&);
	virtual Vector Norm(const Point &);
};

class GenBox: public Objects{
public:
	virtual Model* Modelize();
	virtual float Hit(const Ray&);
	virtual Vector Norm(const Point &);
};

class GenPlane : public Surface{
public:
	GenPlane();
	virtual Point operator()(float, float);
	virtual float Hit(const Ray&);
	virtual Vector Norm(const Point &);
};

class  GenSquare : public GenPlane{
public:
	virtual float Hit(const Ray&);

};

class GenCylinder: public Revolution{
	virtual Point p(float);
public:
	virtual float Hit(const Ray&);
	virtual Vector Norm(const Point &);
};

class GenCone: public Revolution{
	virtual Point p(float);
public:
	virtual float Hit(const Ray&);
	virtual Vector Norm(const Point &);
};

class GenPolyhedron{
	virtual float Hit(const Ray&);
};

#endif
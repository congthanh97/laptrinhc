// Lop the hien tu nguyen hinh mau 
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __INSTANCE_HPP
#define __INSTANCE_HPP

#include "genprimi.hpp"
#include "camera.hpp"

class Instance{
protected:
	Objects *obj;
	Affine M;
public:
	Instance();
	Instance(Objects*);
	Instance(Objects*, const Affine &);
	void Draw(Camera&);
	virtual float Shiny(const Point&);
	virtual float RefCoeff(const Point&);
	virtual Vector Norm(const Point&);
	virtual float Hit(const Ray &);
};

class Square: public Instance{
public:
	Square();
	~Square();
	virtual float RefCoeff(const Point&);
};

class Mirror: public Instance{
public:
	Mirror(const Affine&);
	~Mirror();
	virtual float Shiny(const Point&);
};

#endif
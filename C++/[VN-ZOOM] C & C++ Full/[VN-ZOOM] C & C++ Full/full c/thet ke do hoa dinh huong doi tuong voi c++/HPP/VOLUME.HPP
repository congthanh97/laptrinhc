// Lop khoi quan sat 3D
// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Mo ta trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#if !defined __VOLUME_HPP
#define __VOLUME_HPP

#include "viewport.hpp"
#include "tools.hpp"

class Camera;
class Volume: public Viewport{
friend class Camera;
	float F, K;
public:
	Volume();
	Volume(float, float, float, float, float, float);
	virtual int Clip(Point &, Point &);
};

#endif

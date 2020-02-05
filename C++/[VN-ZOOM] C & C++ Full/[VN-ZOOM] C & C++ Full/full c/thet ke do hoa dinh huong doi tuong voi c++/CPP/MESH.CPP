// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "mesh.hpp"
#include "raster.hpp"

Face::Face():idx(),plane()
{
}

Face::Face(int n):idx(n), plane()
{
}

Face::Face(int n, int *p): idx(n, p), plane()
{
}

Face::Face(int n, int *p, const Plane &pl): idx(n,p), plane(pl)
{
}

void Face::Setplane(const Plane &p)
{
	plane = Plane(p);
}

void Face::Setidx(int i, int k)
{
	idx.Set(i,k);
}

int Face::operator[](int i)
{
	return idx[i];
}

Face &Face::operator=(const Face &f)
{
	idx = f.idx;
	plane = f.plane;
	return *this;
}

int Face::operator==(const Face &f)
{
	return (idx==f.idx);
}

int Face::VertNum()
{
	return idx.Count();
}

istream &operator >> (istream &in, Face &f)
{
	in>>f.idx;
	return in;
}


int Mesh::draw_md = wire_md;

Mesh::Mesh(const Poly<Point> &p, const Poly<Face> &F):Model(p)
{
	f = F;
}

Mesh::Mesh(char *filename):Model(0)
{
	ifstream in(filename);
	int n;
	in>>n;
	Poly<Point> P(n); in>>P;
	in>>n; Face *F = new Face[n];
	int i, m;
	for (i=0; i<n; i++)
	{
		in>>m;
		F[i] = Face(m);
	}
	for (i=0; i<n; i++)
	{
		in>>F[i];
		F[i].Setplane(Plane(P[F[i][0]],P[F[i][1]],P[F[i][2]]));
	}
	p = P;
	f = Poly<Face>(n,F);
	delete F;
}

void Mesh::SetDrawMode(int md)
{
	draw_md = md;
}

void Mesh::WireDraw(ViewSys *c)
{
	int k, j1;
	for (int i=0; i<f.Count(); i++)
	{
		k = f[i].VertNum();
		for (int j=0; j<k; j++)
		{
			j1 = j + 1;
			if (j1 == k) j1 = 0;
			c->Line(p[f[i][j]],p[f[i][j1]]);
		}
	}
}

void Mesh::LineDraw(ViewSys *c)
{
	//tham khao trang 327
}

void Mesh::FlatDraw(ViewSys *c)
{
	preProcess1();
	Raster dc;
	Vector e = ((Camera*)(c))->Eye() - Point();
	int k, j1;
	float cl;
	Pixel *px;
	Point q;
	for (int i=0; i<f.Count(); i++)
	{
		cl = e.Cosin(f[i].plane.Norm());
		if (cl>0.0)
		{
			k = f[i].VertNum();
			px = new Pixel[k];
			for (int j=0; j<k; j++)
				c->World2Device(p[f[i][j]],px[j].x,px[j].y);
			dc.SetTile(15*cl);
			dc.Fill(k,px);
			delete px;
		}
	}
}

void Mesh::Draw(ViewSys *c)
{
	switch (draw_md)
	{
		case wire_md: WireDraw(c); break;
		case line_md: LineDraw(c); break;
		case flat_md: FlatDraw(c); break;
	}
}

void Mesh::preProcess1()
{
	Face tmp;
	for (int i=0; i<f.Count(); i++)
	{
		tmp = f[i];
		tmp.Setplane(Plane(p[f[i][0]],p[f[i][1]],p[f[i][2]]));
		f.Set(i,tmp);
	}
}



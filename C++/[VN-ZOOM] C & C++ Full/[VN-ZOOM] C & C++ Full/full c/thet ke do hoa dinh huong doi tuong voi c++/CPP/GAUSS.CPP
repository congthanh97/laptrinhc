// Ngon ngu C++3.0
// Viet boi Huynh van Duc
// Thang 11/2000
// Cai dat trong "Thiet ke do hoa dinh huong doi tuong voi C++"

#include "gauss.hpp"

int Gauss::init = InitRand();
int Gauss::i_ran = 0;
int Gauss::j_ran = 0;
int Gauss::ranlist[17] = {0};

int Gauss::InitRand()
{
	int the_seed = 0, all_even = 1, i;
	do for (i = 0; i<17; i++)
	{
		the_seed = (the_seed*2743 + 5923) % MODULUS;
		if (the_seed<0) the_seed += MODULUS;
		if (1==(the_seed%2)) all_even=0;
		Gauss::ranlist[i] = the_seed;
	} while (all_even);
	Gauss::i_ran = 16; Gauss::j_ran = 4;
	return 1;
}

float Gauss::GetRand()
{
	int randnum = (ranlist[i_ran]+ranlist[j_ran]) % MODULUS;
	if (randnum<0) randnum += MODULUS;
	ranlist[i_ran] = randnum;
	if (0==i_ran) i_ran=16; else i_ran-= 1;
	if (0==j_ran) j_ran=16; else j_ran-= 1;
	return 1.0*randnum/MODULUS;
}

float Gauss::Random()
{
	float v = 0.0;
	for (int i = 0; i<12; i++) v += GetRand();
	return (v-6.0);
}
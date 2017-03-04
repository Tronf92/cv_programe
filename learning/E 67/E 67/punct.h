#if !defined(_PUNCT_H_)
#define _PUNCT_H_
#include <stdio.h>
#include <math.h>

class Punct{
public:
	Punct();
	Punct(int x);
	Punct(int x, int y);
	~Punct();

	void Afiseaza();
	void SeteazaCoordonatele(int x, int y);
	double DistantaPanaLa(Punct p);
	double Panta(Punct p);
	Punct& operator+(const Punct&);

private:
	int x;
	int y;
};

#endif
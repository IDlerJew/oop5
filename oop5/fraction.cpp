#include "fraction.h"
#include <iostream>
#include <iso646.h>


fraction::fraction() {
	chisl =  1;
	znamen = 1;
}



long  fraction::getChisl() {
	return chisl;
}

unsigned short int fraction::getZnamen() {
	return znamen;
}

void fraction::setChisl(long ch) {
	
	chisl = ch;
}

void fraction::setZnamen(unsigned short int zn) {
	znamen = zn;
}

fraction::fraction(const fraction& fract) {
	chisl = fract.chisl;
	znamen = fract.znamen;
}


int fraction::MaxNod(int a, int b)
{
	if (b == 0) {
		return a;
	}
	return MaxNod(b, a % b);
}

void fraction::Normaldrob()
{
	int t = MaxNod(chisl, znamen);
	//cout << t<<endl;
	chisl = chisl / t;
	znamen = znamen / t;
	return;
}

Pair* fraction::operator+(const Pair* a) {

	Pair* t = new fraction((Getchisl() * a->Getznamen()) + (Getznamen() * (a->Getchisl())),Getznamen() * (a->Getznamen()));
	return t;
}

Pair* fraction::operator-(const Pair* a) {
	if ((Getchisl() * (a->Getznamen())) - (Getznamen() * (a->Getchisl())) == 0) {
		Pair* t = new fraction(0, 0);
		return t;
	}
	else {
		Pair* t = new fraction((Getchisl() * (a->Getznamen())) - (Getznamen() * (a->Getchisl())),
			(Getznamen() * (a->Getznamen())));

		return t;
	}
}

Pair* fraction::operator/(double& a) {
	Pair* t = new fraction(chisl ,znamen / a);
	return t;
}
Pair* fraction::operator*(double& a) {
	Pair* t = new fraction(chisl*a,znamen );
	return t;
}

bool fraction::operator!=(fraction& a)
{
	if (chisl != a.getChisl() || znamen != a.getZnamen()) return true;
	return false;
}

bool fraction::operator==(fraction& a)
{
	if (chisl != a.getChisl() || znamen != a.getZnamen()) return false;
	return true;
}


fraction& fraction::operator=(fraction const& _fract)
{
	if (&_fract != this)
	{
		this->chisl = _fract.chisl;
		this->znamen = _fract.znamen;
	}
	return *this;
}
bool fraction::operator>(fraction& a) {

	if (chisl * a.getZnamen() > a.getChisl() * znamen) {

		return true;
	}
	else return false;
}
bool fraction::operator>=(fraction& a)
{
	if (chisl * a.getZnamen() >= a.getChisl() * znamen) {

		return true;
	}
	else return false;
}
bool fraction::operator<(fraction& a)
{
	if (chisl * a.getZnamen() < a.getChisl() * znamen) {

		return true;
	}
	return  false;
}
bool fraction::operator<=(fraction& a)
{
	if (chisl * a.getZnamen() <= a.getChisl() * znamen) {

		return true;
	}
	return  false;
}

fraction::~fraction()
{
	
}

ostream& operator<<(ostream& strm, fraction fract) {\
	if (fract.znamen == 0) {
	strm << fract.chisl<<	"/" << fract.znamen;
	return strm;
	}

	fract.Normaldrob();
	strm << fract.chisl << "/" << fract.znamen<<" ";
	return strm;
}

istream& operator>>(istream& strm, fraction& fract) {
	
	strm >> fract.chisl >> fract.znamen;
	return strm;
}
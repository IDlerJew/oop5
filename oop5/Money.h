#pragma once
#include "Pair.h"
#include <iostream>
#include <cmath>
using namespace std;
class Money: public Pair{
private:   
    
    
public:

    Money(int aRuble=0, int _kop=0) : Pair(aRuble,_kop) {}
    void Setruble(long aruble);
    long Getruble() const;
    unsigned char  Getkop();
    void Setkop(long kop1);
    void Multi(double a, Money b);
    void Degres(double a, Money b);
    void Degres(long a, Money b);
    void Sum(Money a, Money b);
    void Minus(Money a, Money b);
    void Cout();
    bool  Sravn(Money b);
    Pair* operator+(const Pair* a);
    Pair* operator-(const Pair* a);
    Pair* operator*(double& a);
    Pair* operator/(double& a);
    virtual ~Money() {}
    friend std::ostream& operator<<(std::ostream& strm, Money fract);
};


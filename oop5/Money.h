#pragma once
#include "Pair.h"
#include <iostream>
#include <cmath>
using namespace std;
class Money: public Pair{
private:   
    
    
public:
    /*
    * ����������� � ����������� � �� ���������
    * @param aRuble - �����
    * @param _kop - �������
    * 
    */
    Money(int aRuble=0, int _kop=0) : Pair(aRuble,_kop) {}
    /*
    * ������ ������
    * @param long aruble 
    * @return void
    */
    void Setruble(long aruble);
    /*
    * ������ �����
    * @return long 
    */
    long Getruble() const;
    /*
    * ������ ������ 
    * @return unsigned char
    */
    unsigned char  Getkop();
    /*
    * ������ ������ 
    * @param long kop1
    * @return void
    */
    void Setkop(long kop1);
    /*
    * ������� ���������
    * @param double a
    * @param Money b
    * @return void
    */
    void Multi(double a, Money b);
    /*
   * ������� �������
   * @param double a
   * @param Money b
   * @return void
   */
    void Degres(double a, Money b);
    /*
   * ������� �����
   * @param double a
   * @param Money b
   * @return void
   */
    void Sum(Money a, Money b);
    /*
   * ������� ������
   * @param double a
   * @param Money b
   * @return void
   */
    void Minus(Money a, Money b);
    /*
   * ������� ���������
   * @param Money b
   * @return bool
   */
    bool  Sravn(Money b);
    //____________________________________________________________________________________________________________________________________
    /*
        ������������� �������� ��������
        @param const Pair* other
        @return Pair* - ��������� ��������
    */
    Pair* operator+(const Pair* a);
    /*
        ������������� �������� ���������
        @param const Pair* other
        @return Pair* - ��������� ���������
    */
    Pair* operator-(const Pair* a);
    /*
        ������������� �������� ���������
        @param double& a 
        @return Pair* - ��������� ���������
    */
    Pair* operator*(double& a);
    /*
        ������������� �������� �������
        @param double& a 
        @return Pair* - ��������� �������
    */
    Pair* operator/(double& a);
    /*
        ����������
    */
    virtual ~Money() {}
    /*
        ������������� �������� ������
        @param ostream& strm
        @param Money fract
        @return ostream&
    */
    friend std::ostream& operator<<(std::ostream& strm, Money fract);
};


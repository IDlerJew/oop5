#pragma once
#include "Pair.h"
#include <iostream>
#include <cmath>
using namespace std;
class Money: public Pair{
private:   
    
    
public:
    /*
    * Конструктор с параметрами и по умолчанию
    * @param aRuble - рубли
    * @param _kop - копейки
    * 
    */
    Money(int aRuble=0, int _kop=0) : Pair(aRuble,_kop) {}
    /*
    * Сеттер рублей
    * @param long aruble 
    * @return void
    */
    void Setruble(long aruble);
    /*
    * Геттер рубля
    * @return long 
    */
    long Getruble() const;
    /*
    * Геттер копеек 
    * @return unsigned char
    */
    unsigned char  Getkop();
    /*
    * Сеттер копеек 
    * @param long kop1
    * @return void
    */
    void Setkop(long kop1);
    /*
    * Функция умножения
    * @param double a
    * @param Money b
    * @return void
    */
    void Multi(double a, Money b);
    /*
   * Функция деления
   * @param double a
   * @param Money b
   * @return void
   */
    void Degres(double a, Money b);
    /*
   * Функция суммы
   * @param double a
   * @param Money b
   * @return void
   */
    void Sum(Money a, Money b);
    /*
   * Функция минуса
   * @param double a
   * @param Money b
   * @return void
   */
    void Minus(Money a, Money b);
    /*
   * Функция сравнения
   * @param Money b
   * @return bool
   */
    bool  Sravn(Money b);
    //____________________________________________________________________________________________________________________________________
    /*
        Перегруженный оператор сложения
        @param const Pair* other
        @return Pair* - результат сложения
    */
    Pair* operator+(const Pair* a);
    /*
        Перегруженный оператор вычитания
        @param const Pair* other
        @return Pair* - результат вычитания
    */
    Pair* operator-(const Pair* a);
    /*
        Перегруженный оператор умножения
        @param double& a 
        @return Pair* - результат умножения
    */
    Pair* operator*(double& a);
    /*
        Перегруженный оператор деления
        @param double& a 
        @return Pair* - результат деления
    */
    Pair* operator/(double& a);
    /*
        Деструктор
    */
    virtual ~Money() {}
    /*
        Перегруженный оператор вывода
        @param ostream& strm
        @param Money fract
        @return ostream&
    */
    friend std::ostream& operator<<(std::ostream& strm, Money fract);
};


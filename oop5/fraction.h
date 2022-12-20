#pragma once
#include "Pair.h"
#include <iostream>
using namespace std;

class fraction : public Pair
	{
	public:
		/*
		 * Конструктор дроби
		 * @return дробь 1/1
		*/
		fraction();
		/*
		 * Конструктор дроби
		 * @param c <число - числитель>
		 * @param z <число - знаменатель>
		 * @return <дробь c/z>
		*/
		fraction(int c,  int z): Pair(c,z){}
		/*
		 * Конструктор копирования
		 * @param fract <ссылка на дробь для копирования>
		 * @return <копия матрицы>
		*/
		fraction(const fraction& fract);
		/*
		 * Получение числителя
		 * @return <private: chisl>
		*/
		long  getChisl();
		/*
		 * Получение знаменателя
		 * @return <private: znamen>
		*/
		unsigned short int getZnamen();
		/*
		 * Задание числителя
		 * @param ch <число в числитель>
		 * @return <NULL>
		*/
		void setChisl(long ch);
		/*
		 * Задание знаменателя
		 * @param zn <число в знаменатель>
		 * @return <NULL>
		*/
		void setZnamen(unsigned short int zn);
		/*
		 * Оператор сложения
		 * @param a <ссылка на объект-Pair>
		 * @return <указатель на fraction>
		*/

		Pair* operator+(const Pair* a);
		/*
		 * Оператор вычитания
		 * @param a <ссылка на объект-Pair>
		 * @return <указатель на fraction>
		*/
		Pair* operator-(const Pair* a);
		/*
		 * Оператор умножения
		 * перегрузка плюса
		 * @param  double& a
		 * @return <указатель на fraction>
		*/
		Pair* operator*(double& a);
		/*
		 * Оператор деления
		 * @param double& a
		 * @return <указатель на fraction>
		*/
		Pair* operator/(double& a);
		/*
		 * Оператор сравнения
		 * @param a <ссылка на объект-fraction>
		 * @return <bool>
		*/
		bool operator!=(fraction& a);
		/* Оператор сравнения
		 * @param a <ссылка на объект-fraction>
		 * @return <bool>
		*/
		bool operator==(fraction& a);
		/* Оператор сравнения
		 * @param a <ссылка на объект-fraction>
		 * @return <bool>
		*/
		bool operator>(fraction& a);
		/* Оператор сравнения
		 * @param a <ссылка на объект-fraction>
		 * @return <bool>
		*/
		bool operator>=(fraction& a);
		/* Оператор сравнения
		 * @param a <ссылка на объект-fraction>
		 * @return <bool>
		*/
		bool operator<(fraction& a);
		/* Оператор сравнения
		 * @param a <ссылка на объект-fraction>
		 * @return <bool>
		*/
		bool operator<=(fraction& a);


		~fraction();
		/*
		 * Оператор присваивания
		 * @param a <ссылка на объект-fraction>
		 * @return <NULL>
		*/
		fraction& operator=(const fraction& _fract);
		/*
		 * Оператор ввода
		 * @param strm <поток ввода>
		 * @param fract <дробь для заполнения>
		 * @return <возвращает поток ввода>
		*/
		friend std::istream& operator>>(std::istream& strm, fraction& fract);
		/*
		 * Оператор вывода
		 * @param strm <поток вывода>
		 * @param fract <дробь для печати>
		 * @return <возвращает поток вывода>
		*/
		friend std::ostream& operator<<(std::ostream& strm, fraction fract);
	private:
		/*
		* Функция поиска максимального делителя 
		* @param a-первое число
		* @param b-первое число
		* @return int NOD
		*/
		int MaxNod(int a, int b);
		/*
		* Функция создания неделимой дроби
		* @return void
		*/
		void Normaldrob();
	};

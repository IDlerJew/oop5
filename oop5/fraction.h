#pragma once
#include "Pair.h"
#include <iostream>
using namespace std;

class fraction : public Pair
	{
	public:
		/*
		 * ����������� �����
		 * @return ����� 1/1
		*/
		fraction();
		/*
		 * ����������� �����
		 * @param c <����� - ���������>
		 * @param z <����� - �����������>
		 * @return <����� c/z>
		*/
		fraction(int c,  int z): Pair(c,z){}
		/*
		 * ����������� �����������
		 * @param fract <������ �� ����� ��� �����������>
		 * @return <����� �������>
		*/
		fraction(const fraction& fract);
		/*
		 * ��������� ���������
		 * @return <private: chisl>
		*/
		long  getChisl();
		/*
		 * ��������� �����������
		 * @return <private: znamen>
		*/
		unsigned short int getZnamen();
		/*
		 * ������� ���������
		 * @param ch <����� � ���������>
		 * @return <NULL>
		*/
		void setChisl(long ch);
		/*
		 * ������� �����������
		 * @param zn <����� � �����������>
		 * @return <NULL>
		*/
		void setZnamen(unsigned short int zn);
		/*
		 * �������� ��������
		 * @param a <������ �� ������-Pair>
		 * @return <��������� �� fraction>
		*/

		Pair* operator+(const Pair* a);
		/*
		 * �������� ���������
		 * @param a <������ �� ������-Pair>
		 * @return <��������� �� fraction>
		*/
		Pair* operator-(const Pair* a);
		/*
		 * �������� ���������
		 * ���������� �����
		 * @param  double& a
		 * @return <��������� �� fraction>
		*/
		Pair* operator*(double& a);
		/*
		 * �������� �������
		 * @param double& a
		 * @return <��������� �� fraction>
		*/
		Pair* operator/(double& a);
		/*
		 * �������� ���������
		 * @param a <������ �� ������-fraction>
		 * @return <bool>
		*/
		bool operator!=(fraction& a);
		/* �������� ���������
		 * @param a <������ �� ������-fraction>
		 * @return <bool>
		*/
		bool operator==(fraction& a);
		/* �������� ���������
		 * @param a <������ �� ������-fraction>
		 * @return <bool>
		*/
		bool operator>(fraction& a);
		/* �������� ���������
		 * @param a <������ �� ������-fraction>
		 * @return <bool>
		*/
		bool operator>=(fraction& a);
		/* �������� ���������
		 * @param a <������ �� ������-fraction>
		 * @return <bool>
		*/
		bool operator<(fraction& a);
		/* �������� ���������
		 * @param a <������ �� ������-fraction>
		 * @return <bool>
		*/
		bool operator<=(fraction& a);


		~fraction();
		/*
		 * �������� ������������
		 * @param a <������ �� ������-fraction>
		 * @return <NULL>
		*/
		fraction& operator=(const fraction& _fract);
		/*
		 * �������� �����
		 * @param strm <����� �����>
		 * @param fract <����� ��� ����������>
		 * @return <���������� ����� �����>
		*/
		friend std::istream& operator>>(std::istream& strm, fraction& fract);
		/*
		 * �������� ������
		 * @param strm <����� ������>
		 * @param fract <����� ��� ������>
		 * @return <���������� ����� ������>
		*/
		friend std::ostream& operator<<(std::ostream& strm, fraction fract);
	private:
		/*
		* ������� ������ ������������� �������� 
		* @param a-������ �����
		* @param b-������ �����
		* @return int NOD
		*/
		int MaxNod(int a, int b);
		/*
		* ������� �������� ��������� �����
		* @return void
		*/
		void Normaldrob();
	};

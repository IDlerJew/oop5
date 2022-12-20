#pragma once
class Pair
{   protected:
	int chisl;
	int znamen;
public:
	/*
		����������� � �����������
		@param const int _chisl - ������ �����
		@param const int _znamen - ������ �����
	*/
	Pair(long _chisl=0, int _znamen=0) :chisl(_chisl), znamen(_znamen) {}
	/*
		������ ������� �����
		@return int
	*/
	int Getchisl() const;
	/*
		������ ������� �����
		@return int
	*/
	int Getznamen() const;
	/*
		������ ����������� �����, ���������� ��������� ��������
		@param const Pair* other
		@return Pair* - ��������� ��������
	*/
	virtual Pair* operator+(const Pair* other)=0;
	/*
		������ ����������� �����, ���������� ��������� ���������
		@param const Pair* other
		@return Pair* - ��������� ���������
	*/
	virtual Pair* operator-(const Pair* other)=0;
	/*
		������ ����������� �����, ���������� ��������� ���������
		@param const Pair* other
		@return Pair* - ��������� ���������
	*/
	virtual Pair* operator*(double& other)=0;
	/*
		������ ����������� �����, ���������� ��������� �������
		@param const Pair* other
		@return Pair* - ��������� �������
	*/
	virtual Pair* operator/(double& other)=0;
	/*
		����������
	*/
	virtual ~Pair(){}
};


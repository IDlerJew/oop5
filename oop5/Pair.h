#pragma once
class Pair
{   protected:
	int chisl;
	int znamen;
public:
	/*
		Конструктор с параметрами
		@param const int _chisl - первое число
		@param const int _znamen - второе число
	*/
	Pair(long _chisl=0, int _znamen=0) :chisl(_chisl), znamen(_znamen) {}
	/*
		Геттер первого числа
		@return int
	*/
	int Getchisl() const;
	/*
		Геттер второго числа
		@return int
	*/
	int Getznamen() const;
	/*
		Чистый виртуальный метод, перегрузка оператора сложения
		@param const Pair* other
		@return Pair* - результат сложения
	*/
	virtual Pair* operator+(const Pair* other)=0;
	/*
		Чистый виртуальный метод, перегрузка оператора вычитания
		@param const Pair* other
		@return Pair* - результат вычитания
	*/
	virtual Pair* operator-(const Pair* other)=0;
	/*
		Чистый виртуальный метод, перегрузка оператора умножения
		@param const Pair* other
		@return Pair* - результат умножения
	*/
	virtual Pair* operator*(double& other)=0;
	/*
		Чистый виртуальный метод, перегрузка оператора деления
		@param const Pair* other
		@return Pair* - результат деления
	*/
	virtual Pair* operator/(double& other)=0;
	/*
		Деструктор
	*/
	virtual ~Pair(){}
};


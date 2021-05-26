#pragma once
#include <iostream>
#include<string>
using namespace std;
template<class type>
class Matrix
{
	type** array;
	int row = 0, col = 0;
public:
	Matrix();
	Matrix(int row, int col);
	template<class type>
	friend ostream& operator<<(ostream& output, Matrix<type>& m);
	template<class type>
	friend istream& operator>>(istream& input, Matrix<type>& m);
	Matrix<type>& operator =(const Matrix<type>& m);
	Matrix<type>& operator +=(const Matrix<type>& m);
	Matrix<type>& operator +(const Matrix<type>& n);
	Matrix<type>& operator*(const Matrix<type>& m);
	Matrix<type>& operator *=(const Matrix<type>& m);
	Matrix <type>& operator -(const Matrix<type>& m);
	Matrix<type>& transpose();
	~Matrix();
	
};



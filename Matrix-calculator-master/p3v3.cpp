// p3v3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Matrix.h"
#include"Matrix.cpp"
#include <iostream>
using namespace std;
class MatrixCalculator
{
	string userName;
public:
	MatrixCalculator()
	{
		cout << "enter user name:_ ";
		cin >> this->userName;
	}
	void matrixAddition()
	{
		try
		{
			cout << "hello in Matrix Addition\n";

			int row1 = 0, row2 = 0, col1 = 0, col2 = 0;
			cout << "enter number of rows for matrix1 :_";
			cin >> row1;
			if (cin.fail())
				throw "error";
			cout << "enter number of columns for matrix1 :_";
			cin >> col1;
			if (cin.fail())
				throw "error";
			cout << "enter number of rows for matrix2 :_";
			cin >> row2;
			if (cin.fail())
				throw "error";
			cout << "enter number of columns for matrix2 :_";
			cin >> col2;
			if (cin.fail())
				throw "error";
			cout << "enter matrix1 :_/n";
			Matrix<int>matrix1(row1, col1);
			Matrix<int>matrix2(row2, col2);
			cin >> matrix1;
			if (cin.fail())
				throw "error";
			cout << "enter  matrix2 :_/n";
			cin >> matrix2;
			if (cin.fail())
				throw "error";

			cout << matrix1 + matrix2;
		}
		catch (char* error)
		{
			cout << "error";
		}
	}
	void matrixSubtraction()
	{
		try
		{
			cout << "hello in Matrix subtraction\n";

			int row1 = 0, row2 = 0, col1 = 0, col2 = 0;
			cout << "enter number of rows for matrix1 :_";
			cin >> row1;
			if (cin.fail())
				throw "error";
			cout << "enter number of columns for matrix1 :_";
			cin >> col1;
			if (cin.fail())
				throw "error";
			cout << "enter number of rows for matrix2 :_";
			cin >> row2;
			if (cin.fail())
				throw "error";
			cout << "enter number of columns for matrix2 :_";
			cin >> col2;
			if (cin.fail())
				throw "error";
			cout << "enter matrix1 :_/n";
			Matrix<int>matrix1(row1, col1);
			Matrix<int>matrix2(row2, col2);
			cin >> matrix1;
			if (cin.fail())
				throw "error";
			cout << "enter  matrix2 :_/n";
			cin >> matrix2;
			if (cin.fail())
				throw "error";

			cout << matrix1 - matrix2;
		}
		catch (char* error)
		{
			cout << "error";
		}
	}
	void matrixMultiplication()
	{
		try
		{
			cout << "hello in Matrix Multiplication\n";
			
			int row1 = 0, row2 = 0, col1 = 0, col2 = 0;
			cout << "enter number of rows for matrix1 :_";
			cin >> row1;
			if (cin.fail())
				throw "error";
			cout << "enter number of columns for matrix1 :_";
			cin >> col1;
			if (cin.fail())
				throw "error";
			cout << "enter number of rows for matrix2 :_";
			cin >> row2;
			if (cin.fail())
				throw "error";
			cout << "enter number of columns for matrix2 :_";
			cin >> col2;
			if (cin.fail())
				throw "error";
			cout << "enter matrix1 :_/n";
			Matrix<int>matrix1(row1, col1);
			Matrix<int>matrix2(row2, col2);
			cin >> matrix1;
			if (cin.fail())
				throw "error";
			cout << "enter  matrix2 :_/n";
			cin >> matrix2;
			if (cin.fail())
				throw "error";
			
			cout<< matrix1 * matrix2;
		}
		catch (char *error)
		{
			cout << "error";
		}
	}
	void matrixTranspose()
	{
		try
		{
			cout << "hello in Matrix tanspose\n";
			int row1 = 0, col1 = 0;
			cout << "enter number of rows for matrix :_";
			cin >> row1;
			if (cin.fail())
				throw"error";
			cout << "enter number of columns for matrix :_";
			cin >> col1;
			if (cin.fail())
				throw"error";
			Matrix<int>matrix1(row1, col1);
			cin >> matrix1;
			if (cin.fail())
				throw"error";
			cout<< matrix1.transpose();
		}
		catch (char *error)
		{
			cout << "error";
		}
	}
	void matrixMenu(int &choice)
	{
		cout<<" Welcome to("<<userName<<") Matrix Calculator\n";
		cout << "1 - Perform Matrix Addition\n"
	 		 << "2 - Perform Matrix Subtraction\n"
			 << "3 - Perform Matrix Multiplication\n"
			 << "4 - Matrix Transpose\n";		cin >> choice;
	}
};
int main()
{
	MatrixCalculator matrixCalculator;
	
	while (1)
	{
		int choice;
		matrixCalculator.matrixMenu(choice);
		switch (choice)
		{
		case 1:
			matrixCalculator.matrixAddition();
			break;
		case 2:
			matrixCalculator.matrixSubtraction();
			break;
		case 3:
			matrixCalculator.matrixMultiplication();
			break;
		case 4:
			matrixCalculator.matrixTranspose();
			break;
		default:
			break;
		}
		cout << "if you want to use it again press y else press any key:_";
		string useAgain;
		cin >> useAgain;
		if (useAgain == "y" || useAgain == "Y")
		{
			continue;
		}
		else
			break;
	}
	return 0;
}








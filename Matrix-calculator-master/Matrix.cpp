#include "Matrix.h"
template<class type>
Matrix<type>::Matrix()
{
	col = row = 0;
}
template<class type>
Matrix<type>::Matrix(int row,int col)
{
	this->row = row;
	this->col = col;
	array = new type *[row];
	for (size_t i = 0; i < row; i++)
	{
		array[i] = new type[col];
		for (size_t j = 0; j < col; j++)
		{
			array[i][j] = i + 1;
		}
	}
}
template<class type>
ostream& operator<<(ostream& output, Matrix<type>& m)
{
	for (size_t i = 0; i < m.row; i++)
	{
		for (size_t j = 0; j < m.col; j++)
		{
			output << m.array[i][j] << "\t";
		}
		output << endl;
	}
	return output;
}
template<class type>
istream& operator>>(istream& input, Matrix<type>& m)
{
	for (size_t i = 0; i < m.row; i++)
	{
		for (size_t j = 0; j < m.col; j++)
		{
			cout << "enter elemant number [" << i + 1 << "][" << j + 1 << "]:_";
			input >> m.array[i][j];
		}
	}
	return input;
}
template<class type>
 Matrix<type>& Matrix<type>::operator=(const Matrix<type>& m)
{
	for (size_t i = 0; i < m.row; i++)
	{
		for (size_t j = 0; j < m.col; j++)
		{

			this->array[i][j] = m.array[i][j];
		}
	}
	return *this;
}

 template<class type>
 Matrix<type>& Matrix<type>::operator+=(const Matrix<type>& m)
 {
	 for (size_t i = 0; i < this->row; i++)
	 {
		 for (size_t j = 0; j < this->col; j++)
		 {

			 this->array[i][j] += m.array[i][j];
		 }
	 }
	 return *this;
 }

 template<class type>
 Matrix<type>& Matrix<type>::operator+(const Matrix<type>& m)
 {
	 Matrix<type>*temp;
	 if (this->row == m.row && this->col == m.col)
	 {
		 temp = new Matrix(this->row, this->col);
		 for (size_t i = 0; i < this->row; i++) {
			 for (size_t j = 0; j < this->col; j++)
			 {
				 temp->array[i][j] = this->array[i][j]+ m.array[i][j];
			 }
		 }
		 return *temp;
	 }
	 temp = new Matrix(0, 0);
	 return *temp;
 }

 template<class type>
 Matrix<type>& Matrix<type>::operator*(const Matrix<type>& m)
 {
	 Matrix <type>* temp ;
	 if (this->col == m.row)
	 {
		 temp = new Matrix(m.col, this->row);
		 for (int i = 0; i < temp->row; i++)
		 {
			 for (int j = 0; j < temp->col; j++)
			 {
				 temp->array[i][j] = 0;
				 for (int k = 0; k < this->col; k++)
				 {
					 temp->array[i][j] += this->array[j][k] * m.array[k][j];
				 }
			 }
		 }
		 return *temp;
	 }
	 temp = new Matrix(0, 0);
	 return *temp;
 }

 template<class type>
 Matrix<type>& Matrix<type>::operator*=(const Matrix<type>& m)
 {
	 return *this = *this * m;
 }

 template<class type>
 Matrix<type>& Matrix<type>::operator-(const Matrix<type>& m)
 {
	 Matrix *temp;
	 if (this->row == m.row && this->col == m.col)
	 {
		 temp = new Matrix(this->row, this->col);
		 for (size_t i = 0; i < this->row; i++)
		 {
			 for (size_t j = 0; j < this->col; j++)
			 {
				 temp->array[i][j] = this->array[i][j] - m.array[i][j];
			 }
		 }
		 return *temp;
	 }
	 temp = new Matrix(0, 0);
	 return *temp;
 }

 template<class type>
 Matrix<type>& Matrix<type>::transpose()
 {
	 Matrix *temp;
	 temp = new Matrix(this->col, this->row);
	 for (size_t i = 0; i < this->col; i++)
	 {
		 for (size_t j = 0; j < this->row; j++)
		 {

			 temp->array[i][j] = this->array[j][i];
		 }
	 }
	 return *temp;
 }

 template<class type>
 Matrix<type>::~Matrix()
 {
	 for (size_t i = 0; i <this-> row; i++)
	 {
		 delete[]this->array[i];
	 }
	 delete[] this->array;
 }

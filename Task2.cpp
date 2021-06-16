#include"Task2.h"

using namespace std;



matrix::matrix(unsigned short n_p)
{
	n = n_p;
	ptrMatrix = new(nothrow) unsigned int* [n];

	if (ptrMatrix)
	{
		for (size_t i = 0; i < n; i++)
		{
			ptrMatrix[i] = new(nothrow) unsigned int[n];
			if (!ptrMatrix[i])
			{
				cerr << "Ошибка выделения памяти под указатель на строку матрицы!";
				return;
			}
		}
	}
	else
	{
		cerr << "Ошибка выделения памяти под указатель на матрицу!";
		return;
	}
	cout << "Матрица создана" << endl << endl;
}
matrix::~matrix()
{
	for (size_t i = 0; i < n; i++)
	{
		delete[] ptrMatrix[i];
	}
	delete[] ptrMatrix;
	cout << "Матрица удалена" << endl;
}
unsigned short matrix::getSize()
{
	return n;
}



void fillMatrix(unsigned int** matrix, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			matrix[i][j] = rand() % 1000;
		}
	}
}

void printMatrix(unsigned int** matrix, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;
}


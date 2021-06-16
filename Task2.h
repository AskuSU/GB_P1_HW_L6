#pragma once
#include<cmath>
#include<iostream>


typedef struct matrix
{
private:
	unsigned short n = 0;
public:
	unsigned int** ptrMatrix;
	matrix(unsigned short n_p);
	~matrix();
	unsigned short getSize();
} Matrix;

void fillMatrix(unsigned int** matrix, size_t size);
void printMatrix(unsigned int** matrix, size_t size);

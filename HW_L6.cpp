
#include<iostream>
#include<fstream>

#include"Task1.h"
#include"Task2.h"

using namespace std;

void Task1()
{
	cout << "Введите размер массива N = ";
	unsigned short n = 0;

	do
	{
		if (n != 0) cout << "В беззнаковый int не влезает степень 2ки больше 32х, повторите ввод\nN = ";
		n = GetUserInput();			
	} while (n > 32);
	
	unsigned int* ptrArr = new(nothrow) unsigned int[n];
	
	if (ptrArr)
	{
		for (size_t i = 0; i < n; i++)
		{
			ptrArr[i] = (int)pow(2, i);
		}
		PrintArr(n, false, ptrArr);
		delete[] ptrArr;
	}
	else
	{
		cerr << "Ошибка выделения памяти!";
	}
}

void Task2()
{
	cout << "Матрица 4x4 заполненная рандомно:" << endl << endl;
	unsigned short n = 4;
	Matrix* myMatrix = new Matrix(n);
	unsigned int** ptrMatrix = myMatrix->ptrMatrix;
	fillMatrix(ptrMatrix, myMatrix->getSize());
	printMatrix(ptrMatrix, myMatrix->getSize());
	delete myMatrix;
}

void Task3()
{

}

void Task4()
{

}

void Task5()
{

}

int main()
{
	setlocale(LC_ALL, "RU");

	unsigned short taskNumber = 0;
	while (true)
	{
		do
		{
			cout << "Введите номер задачи от 1 до 5:" << endl;
			taskNumber = GetUserInput();
		} while (taskNumber > 5 || taskNumber < 1);

		cout << endl;

		switch (taskNumber)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 3: Task3();
			break;
		case 4: Task4();
			break;
		case 5: Task5();
			break;
		}
		cout << endl;
	}
}
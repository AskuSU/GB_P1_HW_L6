
#include<iostream>

#include"Task1.h"
#include"Task2.h"
#include"Task3.h"
#include"Task4.h"
#include"Task5.h"

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
	
	outputPowArray(n);
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
	cout << "Генерация 2х файлов:" << endl << endl;
	string nameF1, nameF2;
	nameF1 = getNameFileFromUser(1);
	nameF2 = getNameFileFromUser(2);
	generateFile(nameF1, 100);
	generateFile(nameF2, 80);
}

void Task4()
{
	cout << "Соединение 2х файлов:" << endl << endl;
	string nameF1, nameF2, nameSumF;
	nameF1 = getNameFileFromUser(1);
	nameF2 = getNameFileFromUser(2);
	nameSumF = getNameFileFromUser(100);
	connectTwoFiles(nameF1, nameF2, nameSumF);
}

void Task5()
{
	cout << "Поиск подстроки в файле:" << endl << endl;
	string nameF = getNameFileFromUser(0);
	cout << "Введите искомую подстроку: ";
	string subString;
	cin >> subString;
	if (findSubstringInFile(subString, nameF)) cout << "Подстрока найдена" << endl;
	else cout << "Подстрока НЕ найдена!" << endl;
}

int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(0));

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
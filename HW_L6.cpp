
#include<iostream>
#include<cmath>

using namespace std;

unsigned short GetUserInput()
{
	while (true)
	{
		int input;
		cin >> input;
		if (cin.fail() || input <= 0)
		{
			cout << "Ошибка ввода, повторите ввод: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return (unsigned short)input;
		}
	}
}

void PrintArr(size_t size, bool NeedCnt, unsigned int* Arr)
{
	if (NeedCnt) cout << "Кол-во элементов = " << size << endl;
	for (size_t i = 0; i < size; i++)
	{
		cout << Arr[i] << ' ';
	}
	cout << endl;
}

void Task1()
{
	cout << "Введите размер массива N = ";
	unsigned short n = 0;

	do
	{
		if (n != 0) cout << "В беззнаковый int не влезает степень 2ки больше 32х, повторите ввод\nN = ";
		n = GetUserInput();			
	} while (n > 32);
	
	unsigned int* ptrArr = new (nothrow) unsigned int[n];
	
	if (ptrArr)
	{
		for (size_t i = 0; i < n; i++)
		{
			ptrArr[i] = pow(2, i);
		}
		PrintArr(n, false, ptrArr);
		delete[] ptrArr;
	}
	else
	{
		cout << "Ошибка выделения памяти!";
	}
}

void Task2()
{

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
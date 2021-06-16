
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
	
	unsigned int* ptrArr = new(nothrow) unsigned int[n];
	
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
		cerr << "Ошибка выделения памяти!";
	}
}

typedef struct matrix
{
private:
	unsigned short n = 0;
public:
	unsigned int** ptrMatrix;
	matrix(unsigned short n_p)
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
	~matrix()
	{
		for (size_t i = 0; i < n; i++)
		{
			delete[] ptrMatrix[i];
		}
		delete[] ptrMatrix;
		cout << "Матрица удалена" << endl;
	}
	unsigned short getSize()
	{
		return n;
	}
} Matrix;

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
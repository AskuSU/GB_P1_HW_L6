#include"Task1.h"

using namespace std;

unsigned short GetUserInput()
{
	while (true)
	{
		int input;
		cin >> input;
		if (cin.fail() || input <= 0)
		{
			cout << "������ �����, ��������� ����: ";
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
	if (NeedCnt) cout << "���-�� ��������� = " << size << endl;
	for (size_t i = 0; i < size; i++)
	{
		cout << Arr[i] << ' ';
	}
	cout << endl;
}

void outputPowArray(unsigned short n)
{
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
		cerr << "������ ��������� ������!";
	}
}

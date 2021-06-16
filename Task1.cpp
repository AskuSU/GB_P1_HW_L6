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
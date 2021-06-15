
#include<iostream>

using namespace std;

void Task1()
{

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

	int taskNumber = 0;
	while (true)
	{
		do
		{
			cout << "Введите номер задачи от 1 до 5:" << endl;
			cin >> taskNumber;
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
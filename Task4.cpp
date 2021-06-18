#include"Task4.h"

using namespace std;

void connectTwoFiles(string name1F, string name2F, string nameSumF)
{
	ifstream fin1(name1F + ".txt");
	ifstream fin2(name2F + ".txt");

	if (fin1.is_open())
	{
		if (fin2.is_open())
		{
			ofstream fout(nameSumF + ".txt");

			while (!fin1.eof())
			{
				string s;
				getline(fin1, s);
				fout << s << endl;
			}

			while (!fin2.eof())
			{
				string s;
				getline(fin2, s);
				fout << s << endl;
			}
			fout.close();
		}
		else
		{
			cout << "Ошибка! Файла " << name2F << " не существует";
		}
	}
	else
	{
		cout << "Ошибка! Файла " << name1F << " не существует";
	}
}

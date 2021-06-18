#include"Task5.h"

using namespace std;

bool findSubstringInFile(std::string subString, std::string nameF)
{
	ifstream fin(nameF + ".txt");

	if (fin.is_open())
	{
		while (!fin.eof())
		{
			string s;
			getline(fin, s);
			if (s.find(subString) != string::npos)
			{
				return true;
			}
		}		
	}
	else
	{
		cout << "������! ����� " << nameF << ".txt �� ����������" << endl;
	}

	return false;
}

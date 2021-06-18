#include"Task3.h"
using namespace std;

string getNameFileFromUser(unsigned short indexF)
{
	cout << "Ââåäèòå èìÿ";
	switch (indexF)
	{
	case 0:
		break;
	case 100:
		cout << " Êîíå÷íîãî";
		break;
	default:
		cout << " " << indexF << "ãî";
		break;
	}
	cout << " ôàéëà(áåç ðàñøèðåíèÿ): ";
	string s;
	cin >> s;

	return s;
}

void generateFile(string nameFile, unsigned short ñharacters)
{
	ofstream fout(nameFile + ".txt");
	
	while (ñharacters)
	{
		unsigned short randLength;
		do
		{
			randLength = rand() % 25;
		} while (randLength <= 0);
		if ((int)ñharacters - randLength < 0) randLength = ñharacters;
		for (unsigned short i = 0; i < randLength - 1; i++)
		{
			fout << (char)(rand() % 65 + 57);
			//fout << (char)(rand() % 128 + 47);
		}
		if (randLength != ñharacters) fout << ' ';
		ñharacters -= randLength;
	}

	fout.close();
}
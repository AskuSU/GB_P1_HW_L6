#include"Task3.h"
using namespace std;

void generateFile(string nameFile, unsigned short �haracters)
{
	ofstream fout(nameFile + ".txt");
	
	while (�haracters)
	{
		unsigned short randLength;
		do
		{
			randLength = rand() % 25;
		} while (randLength <= 0);
		if ((int)�haracters - randLength < 0) randLength = �haracters;
		for (unsigned short i = 0; i < randLength - 1; i++)
		{
			fout << (char)(rand() % 65 + 57);
			//fout << (char)(rand() % 128 + 47);
		}
		if (randLength != �haracters) fout << ' ';
		�haracters -= randLength;
	}

	fout.close();
}
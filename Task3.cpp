#include"Task3.h"
using namespace std;

void generateFile(string nameFile, size_t ñharacters)
{
	ofstream fout(nameFile + ".txt");

	srand(rand()%10000);
	
	while (ñharacters)
	{
		unsigned short randLength;
		do
		{
			randLength = rand() % 25;
		} while (randLength <= 0);
		if ((int)ñharacters - randLength < 0) randLength = ñharacters;
		for (size_t i = 0; i < randLength-1; i++)
		{
			fout << (char)(rand() % 65 + 57);
			//fout << (char)(rand() % 128 + 47);
		}
		if (randLength != ñharacters) fout << ' ';
		ñharacters -= randLength;
	}

	fout.close();
}
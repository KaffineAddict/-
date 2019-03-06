#include "pch.h"
#include <iostream>
#include <string>
#include <time.h>

int main()
{
	srand(time(NULL));

	bool *💩 = new bool[3];

	int 💩💩 = 0;
	int 💩💩💩 = 0;


	for (int i = 0; i < 100000; i++)
	{
		💩[0] = false;
		💩[1] = false;
		💩[2] = false;

		int 💩💩💩💩 = rand() % 3;
		int 💩💩💩💩💩 = rand() % 3;
		int 💩💩💩💩💩💩 = 0;

		do
		{
			💩💩💩💩💩💩 = rand() % 3;
		} while (💩💩💩💩💩💩 == 💩💩💩💩 || 💩💩💩💩💩💩 == 💩💩💩💩💩);


		💩[💩💩💩💩] = true;
		if (💩[💩💩💩💩💩])
		{
			💩💩💩++;
		}
		else
		{
			💩💩++;
		}
	}

	std::cout << "If you switched you would win " << 💩💩 << " times.\n";
	std::cout << "If you stayed you would win " << 💩💩💩 << " times.\n";
}

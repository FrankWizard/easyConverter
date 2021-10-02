#include <iostream>
#include "essentials.h"


int main()
{
	name();
	std::string login = "admin";
	std::string pass = "root";
	inputAndCompare(login, pass);//login

	while (true)//main loop
	{
		int converterChoice = chooseConverter();
	
		if (converterChoice == 1)
		{
			currencyConverter();
		}
	}

}

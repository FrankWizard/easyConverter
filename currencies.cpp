#include <iostream>

void GBP()
{
	std::cout << "Enter amount of GBP: ";
	float GBP;
	float USD = 1.35;
	float CZK = 29.58;
	std::cin >> GBP;
	float main = GBP;
	std::cout << main << " GBP = " << main * USD << " USD\n";
	std::cout << main << " GBP = " << main * CZK << " CZK\n";
}

void USD()
{
	std::cout << "Enter amount of USD: ";
	float GBP = 0.74;
	float USD;
	float CZK = 21.84;
	std::cin >> USD;
	float main = USD;
	std::cout << main << " USD = " << main * GBP << " GBP\n";
	std::cout << main << " USD = " << main * CZK << " CZK\n";
}

void CZK()
{
	std::cout << "Enter amount of CZK: ";
	float GBP = 0.034;
	float USD = 0.046;
	float CZK;
	std::cin >> CZK;
	float main = CZK;
	std::cout << main << " CZK = " << main * USD << " USD\n";
	std::cout << main << " CZK = " << main * GBP << " GBP\n";
}
#pragma once
#include <iostream>

void getInt(int& a)
{
	setlocale(0, "");
	while (1)
	{
		if (std::cin >> a)
			break;

		std::cin.clear();

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "Поробуйте снова!\n»";
	}
}
#include "Alphabet.h"
int main()
{
	setlocale(0, "");
	std::cout << "ddddd";
	prog3::Alphabet A("abcdefg");
	std::cout << A<< std::endl;
	std::cout << "������� ������, ������� ������ ������������" << std::endl;
	//std::cin.ignore(32767, '\n');
	std::string str;
	std::getline(std::cin, str);
	std::cout << "������� ����� � ��������" << std::endl;
	int sdvig = 2;
	try
	{
		A.coding(sdvig, str);
	}

	catch (const std::exception & a)
	{
		std::cerr << "\n[ERROR] " << a.what() << std::endl;
	}
	std::cout << "�������������� ������" << A.coding(sdvig, str) << std::endl;
	std::cout << "�������������� ������" << A.coding(sdvig, str) << std::endl;
}
#include "dialog.h"
#include "/Users/MI/source/repos/lab3_dynamic_alphabet/lab3_dynamic_alphabet/Alphabet_dynamic.h"

int main()
{
	setlocale(0, "");
	int alph;
	int opt = 1;
	prog3::Alphabet Alphabet1;
	prog3::Alphabet Alphabet2;
	while (opt)
	{
		std::cout << "�������� ������������� ������� ��������:" << std::endl <<
			"1.������ �������" << std::endl <<
			"2.������� � ������������ ��������" << std::endl <<
			"3.������� ��������� �� ���� � ������" << std::endl;
		prog33::getInt(alph);
		if (alph == 1)
		{
			std::cout << "A������ ������" << std::endl;
			break;
		}
		else if (alph == 2)
		{
			std::cout << "������� ���������� ����" << std::endl;
			prog33::getInt(alph);
			try
			{
				prog3::Alphabet Alphabet11(alph);
				Alphabet1 = Alphabet11;
			}

			catch (std::exception & a)
			{
				std::cerr << "\n[ERROR] " << a.what() << std::endl;
			}

			std::cout << "A������ ������" << std::endl;
			break;
		}
		else if (alph == 3)
		{
			std::cin.ignore(32767, '\n');
			std::string str;
			std::getline(std::cin, str);
			prog3::Alphabet Alphabet11(str);
			Alphabet1 = Alphabet11;
			std::cout << "A������ ������" << std::endl;
			break;
		}
		else
		{
			std::cout << "��������� ����" << std::endl;
		}
	}
	while (opt)
	{
		std::cout << std::endl << "�������� ������������� ������� ��������:" << std::endl <<
			"1.������ �������" << std::endl <<
			"2.������� � ������������ ��������" << std::endl <<
			"3.������� ��������� �� ���� � ������" << std::endl <<
			"4.������� ������ �������" << std::endl;
		prog33::getInt(alph);
		if (alph == 1)
		{
			std::cout << "A������ ������" << std::endl;
			break;
		}
		else if (alph == 2)
		{
			std::cout << "������� ���������� ����" << std::endl;
			prog33::getInt(alph);
			prog3::Alphabet Alphabet22(alph);
			Alphabet2 = Alphabet22;
			std::cout << "A������ ������" << std::endl;
			break;
		}
		else if (alph == 3)
		{
			std::cin.ignore(32767, '\n');
			std::string str;
			std::getline(std::cin, str);
			prog3::Alphabet Alphabet22(str);
			Alphabet2 = Alphabet22;
			std::cout << "A������ ������" << std::endl;
			break;
		}
		else if (alph == 4)
		{
			std::cout << Alphabet1;
		}
		else
			std::cout << "��������� ����" << std::endl;
	}
	while (opt)
	{
		std::cout << std::endl << "1.������� ������ �������" << std::endl <<
			"2.������� ������ �������" << std::endl <<
			"3.�������� ������ �������" << std::endl <<
			"4.�������� ������ �������" << std::endl <<
			"5.��������� ������ c� ������ ���������" << std::endl <<
			"6.�������� ������ � ������ �������" << std::endl <<
			"7.����������� ������ � ������� ������� ��������" << std::endl <<
			"8.������������� ������ � ������� ������� ��������" << std::endl <<
			"9.�������� ������� ������� � ��������" << std::endl <<
			"10.��������� ������" << std::endl;
		prog33::getInt(alph);
		if (alph == 1)
		{
			std::cout << Alphabet1;
		}
		else if (alph == 2)
		{
			std::cout << Alphabet2;
		}
		else if (alph == 3)
		{
			std::cout << "������� ���������� ����" << std::endl;
			prog33::getInt(alph);
			prog3::Alphabet Alphabet22(alph);
			Alphabet1 = Alphabet22;
			std::cout << "A������ ������" << std::endl;
		}
		else if (alph == 4)
		{
			std::cin.ignore(32767, '\n');
			std::string str;
			std::getline(std::cin, str);
			prog3::Alphabet Alphabet22(str);
			Alphabet2 = Alphabet22;
			std::cout << "A������ ������" << std::endl;
		}
		else if (alph == 5)
		{
			Alphabet1 += Alphabet2;
			std::cout << "A������� ����������" << std::endl;
		}
		else if (alph == 6)
		{
			std::cout << "������� ������, ������� ������ ��������" << std::endl;
			std::cin.ignore(32767, '\n');
			std::string str;
			std::getline(std::cin, str);
			prog3::Alphabet Alphabet33(str);
			Alphabet1 += Alphabet33;
			std::cout << "A������ ������" << std::endl;
		}
		else if (alph == 7)
		{
			std::cout << "������� ������, ������� ������ ����������" << std::endl;
			std::cin.ignore(32767, '\n');
			std::string str;
			std::getline(std::cin, str);
			std::cout << "������� ����� � ��������" << std::endl;
			int sdvig;
			prog33::getInt(sdvig);
			try
			{
				std::cout << "�������������� ������: " << Alphabet1.coding(sdvig, str) << std::endl;
			}

			catch (std::exception & a)
			{
				std::cerr << "\n[ERROR] " << a.what() << std::endl;
			}
		}
		else if (alph == 8)
		{
			std::cout << "������� ������, ������� ������ ������������" << std::endl;
			std::cin.ignore(32767, '\n');
			std::string str;
			std::getline(std::cin, str);
			std::cout << "������� ����� � ��������" << std::endl;
			int sdvig;
			prog33::getInt(sdvig);
			try
			{
				std::cout << "�������������� ������" << Alphabet1.decoding(sdvig, str) << std::endl;
			}

			catch (std::exception & a)
			{
				std::cerr << "\n[ERROR] " << a.what() << std::endl;
			}
		}
		else if (alph == 9)
		{
			std::cout << "������� ������, ������� �������� ������ ���������" << std::endl;
			char symbol;
			std::cin >> symbol;
			int otvet = Alphabet1.symbol_check(symbol);
			if (otvet == 1)
				std::cout << "������ ������" << std::endl;
			else
				std::cout << "������ �� ������" << std::endl;
		}
		else if (alph == 10)
			return 0;
		else
			std::cout << "��������� ����" << std::endl;
	}
}
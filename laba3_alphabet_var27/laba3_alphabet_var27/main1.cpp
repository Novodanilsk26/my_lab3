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
		std::cout << "Выберите инициализацию первого алфавита:" << std::endl <<
			"1.Пустой алфавит" << std::endl <<
			"2.Алфавит с определенным размером" << std::endl <<
			"3.Алфавит состоящий из букв в строке" << std::endl;
		prog33::getInt(alph);
		if (alph == 1)
		{
			std::cout << "Aлфавит создан" << std::endl;
			break;
		}
		else if (alph == 2)
		{
			std::cout << "Введите количество букв" << std::endl;
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

			std::cout << "Aлфавит создан" << std::endl;
			break;
		}
		else if (alph == 3)
		{
			std::cin.ignore(32767, '\n');
			std::string str;
			std::getline(std::cin, str);
			prog3::Alphabet Alphabet11(str);
			Alphabet1 = Alphabet11;
			std::cout << "Aлфавит создан" << std::endl;
			break;
		}
		else
		{
			std::cout << "Повторите ввод" << std::endl;
		}
	}
	while (opt)
	{
		std::cout << std::endl << "Выберите инициализацию второго алфавита:" << std::endl <<
			"1.Пустой алфавит" << std::endl <<
			"2.Алфавит с определенным размером" << std::endl <<
			"3.Алфавит состоящий из букв в строке" << std::endl <<
			"4.Вывести первый алфавит" << std::endl;
		prog33::getInt(alph);
		if (alph == 1)
		{
			std::cout << "Aлфавит создан" << std::endl;
			break;
		}
		else if (alph == 2)
		{
			std::cout << "Введите количество букв" << std::endl;
			prog33::getInt(alph);
			prog3::Alphabet Alphabet22(alph);
			Alphabet2 = Alphabet22;
			std::cout << "Aлфавит создан" << std::endl;
			break;
		}
		else if (alph == 3)
		{
			std::cin.ignore(32767, '\n');
			std::string str;
			std::getline(std::cin, str);
			prog3::Alphabet Alphabet22(str);
			Alphabet2 = Alphabet22;
			std::cout << "Aлфавит создан" << std::endl;
			break;
		}
		else if (alph == 4)
		{
			std::cout << Alphabet1;
		}
		else
			std::cout << "Повторите ввод" << std::endl;
	}
	while (opt)
	{
		std::cout << std::endl << "1.Вывести первый алфавит" << std::endl <<
			"2.Вывести второй алфавит" << std::endl <<
			"3.Изменить первый алфавит" << std::endl <<
			"4.Изменить второй алвавит" << std::endl <<
			"5.Соединить первый cо вторым алфавитом" << std::endl <<
			"6.Добавить символ в первый алфавит" << std::endl <<
			"7.Кодирование строки с помощью первого алфавита" << std::endl <<
			"8.Декодирование строки с помощью второго алфавита" << std::endl <<
			"9.Проверка наличия символа в алфавите" << std::endl <<
			"10.Закончить работу" << std::endl;
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
			std::cout << "Введите количество букв" << std::endl;
			prog33::getInt(alph);
			prog3::Alphabet Alphabet22(alph);
			Alphabet1 = Alphabet22;
			std::cout << "Aлфавит создан" << std::endl;
		}
		else if (alph == 4)
		{
			std::cin.ignore(32767, '\n');
			std::string str;
			std::getline(std::cin, str);
			prog3::Alphabet Alphabet22(str);
			Alphabet2 = Alphabet22;
			std::cout << "Aлфавит создан" << std::endl;
		}
		else if (alph == 5)
		{
			Alphabet1 += Alphabet2;
			std::cout << "Aлфавиты объединены" << std::endl;
		}
		else if (alph == 6)
		{
			std::cout << "Введите символ, который хотите добавить" << std::endl;
			std::cin.ignore(32767, '\n');
			std::string str;
			std::getline(std::cin, str);
			prog3::Alphabet Alphabet33(str);
			Alphabet1 += Alphabet33;
			std::cout << "Aлфавит создан" << std::endl;
		}
		else if (alph == 7)
		{
			std::cout << "Введите строку, которую хотите кодировать" << std::endl;
			std::cin.ignore(32767, '\n');
			std::string str;
			std::getline(std::cin, str);
			std::cout << "Введите сдвиг в алфавите" << std::endl;
			int sdvig;
			prog33::getInt(sdvig);
			try
			{
				std::cout << "Закодированная строка: " << Alphabet1.coding(sdvig, str) << std::endl;
			}

			catch (std::exception & a)
			{
				std::cerr << "\n[ERROR] " << a.what() << std::endl;
			}
		}
		else if (alph == 8)
		{
			std::cout << "Введите строку, которую хотите декодировать" << std::endl;
			std::cin.ignore(32767, '\n');
			std::string str;
			std::getline(std::cin, str);
			std::cout << "Введите сдвиг в алфавите" << std::endl;
			int sdvig;
			prog33::getInt(sdvig);
			try
			{
				std::cout << "Декодированная строка" << Alphabet1.decoding(sdvig, str) << std::endl;
			}

			catch (std::exception & a)
			{
				std::cerr << "\n[ERROR] " << a.what() << std::endl;
			}
		}
		else if (alph == 9)
		{
			std::cout << "Введите символ, наличие которого хотите проверить" << std::endl;
			char symbol;
			std::cin >> symbol;
			int otvet = Alphabet1.symbol_check(symbol);
			if (otvet == 1)
				std::cout << "Символ найден" << std::endl;
			else
				std::cout << "Символ не найден" << std::endl;
		}
		else if (alph == 10)
			return 0;
		else
			std::cout << "Повторите ввод" << std::endl;
	}
}
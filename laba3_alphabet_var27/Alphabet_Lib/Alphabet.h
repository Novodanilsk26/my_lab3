#pragma once
#include <string>
#include <iostream>
namespace prog3 {
	class Alphabet {
	private:
		int number_of_letters;// букв в алфавите
		char alphabet[100] = {};
		char help[73] = {
			'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 
			'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D',
			'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 
			'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
			'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8',
			'9', '0', '!', '@', '#', '$', '%', '&', '?', '-',
			'+','=', '~' };
		 void  normal_alphabet();
	public:

		Alphabet();// пустой конструктор
		Alphabet(int size_alphet);// конструктор с алфавитом до какого то числа
		Alphabet(std::string);// конструктор для строки// в будущем сам будет считать количество символов

		void set_number_of_letters(int);// сеттер для букв
		void set_alphabet(int index, char ch);//замена символа в алфавите
		int get_number_of_letters()const;// гетр показывающий сколько букв в алфавите
		char get_aphabet(int f) const;// константный геттер вывод символа алфавита
		// перегрузки
		friend std::istream& operator>> (std::istream& in, Alphabet &konstr);//  оператор ввода
		friend std::ostream& operator<< (std::ostream &out, const Alphabet &alpha );// оператор вывода
		friend Alphabet operator+ ( const Alphabet& konstr, const Alphabet& konstr1);// оператор +
		Alphabet &operator+= (  Alphabet& konstr);// оператор +=
		// доп функции
		std::string coding(int, std::string);// кодирование слова
		std::string decoding(int, std::string);// раскодирование слова
		int symbol_check(char);// наличие символа в алфавите
		// очистка алфавита от дубликатов
		//static void  normal_alphabet(Alphabet& konstr);
		// возможные улучшения
		// пока нету

	};
	//void getInt(int& a);
}
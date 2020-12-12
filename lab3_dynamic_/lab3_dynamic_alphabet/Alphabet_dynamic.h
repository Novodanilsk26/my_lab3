#pragma once
#pragma once
#include <string>
#include <iostream>

namespace prog3 {
	class Alphabet {
	private:
		int number_of_letters;// букв в алфавите
		static const char help[73];
		char* alphabet;
		
		static void  normal_alphabet(Alphabet& konstr);
		//void  normal_alphabet();
	public:
		//конструкторы

		Alphabet() :number_of_letters(), alphabet() {};//+// пустой конструктор
		explicit Alphabet(int size_alphet);//+// конструктор с алфавитом до какого то числа
		Alphabet(const std::string& strok);//конструктор для строки
		// деконструктор
		~Alphabet()
		{
			delete[] alphabet;
		}
		// Конструктор копирования
		Alphabet(const Alphabet& drop);
		// Перемещающий конструктор
		Alphabet(Alphabet&& drob): 
			number_of_letters(drob.number_of_letters),
			alphabet(drob.alphabet)
		{
			drob.number_of_letters = 0;
			drob.alphabet = nullptr;
		}
		// сеттреры и геттеры
		void set_number_of_letters(int);//+ сеттер для букв// менять не придеться
		void set_alphabet(int index, char ch);// менять...//замена символа в алфавите
		int get_number_of_letters()const;//+ гетр показывающий сколько букв в алфавите//менять не придеться
		char get_aphabet(int f) const;//+ константный геттер вывод символа алфавита// менять не придеться
		// перегрузки
		friend std::istream& operator>> (std::istream& in, Alphabet& konstr);//  оператор ввода
		friend std::ostream& operator<< (std::ostream& out, const Alphabet& alpha);// оператор вывода
		friend Alphabet operator+ (const Alphabet& konstr, const Alphabet& konstr1);// оператор +
		Alphabet& operator+=(Alphabet& konstr);
		//Alphabet& operator+= (Alphabet& konstr);// оператор +=
		Alphabet& operator= (const Alphabet& konstr);
		// доп функции
		std::string coding(int, std::string);//+ кодирование слова// менять не придеться
		std::string decoding(int, std::string);//+ раскодирование слова//менять не придеться
		int symbol_check(char);//+ наличие символа в алфавите// если возвращает ноль то символа нет
		// очистка алфавита от дубликатов
		//static void  normal_alphabet(Alphabet& konstr);
		// возможные улучшения
		// пока нету

	};
	void getInt(int& a);
	
}
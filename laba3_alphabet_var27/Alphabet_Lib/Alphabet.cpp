#include "Alphabet.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <set>

namespace prog3 {

	Alphabet::Alphabet(int size_alph)
	{
		if (size_alph < 0)
			throw std::exception("Again");
		if (size_alph > 74)
			throw std::exception("Again");
		number_of_letters = size_alph;
		for (int i = 0; i < size_alph; i++)
		{
			alphabet[i] = help[i];
		}
	}

	Alphabet::Alphabet( const std::string strok)
	{
		if (strok.size() > 74)
			throw std::exception("Again");
		number_of_letters = strok.size();
		for (int i = 0; i < number_of_letters; i++) {
			alphabet[i] = strok[i];
		}
		normal_alphabet();
	}
	//готово
	char Alphabet::get_aphabet(int f) const
	{
		return alphabet[f];
	}
	//готово
	int Alphabet::get_number_of_letters()const
	{
		return number_of_letters;
	}
	//готово
	void Alphabet::set_number_of_letters(int Const) {
		number_of_letters = Const;
	}
	//готово
	void Alphabet::set_alphabet(int index, char ch)
	{
		if (index >= get_number_of_letters())
			number_of_letters++;
		alphabet[index] = ch;
	}
	//готово
	Alphabet& Alphabet::operator+=( Alphabet& konstr)
	{
		*this = *this + konstr;
		normal_alphabet();
		return *this;
	}
	//готово
	std::ostream& operator<< (std::ostream& out, const Alphabet& alpha)
	{
		for (int i = 0; i < alpha.number_of_letters; i++)
		{
			out << alpha.alphabet[i] << ' ';

		}
		return out;
	}
	//готово
	std::istream& operator>> (std::istream& in, Alphabet& konstr)
	{
		std::string str;
		in >> str;
		konstr = Alphabet(str);
		return in;
	}
	//готово
	Alphabet operator+ (const Alphabet& konstr, const Alphabet& konstr1)
	{
		//Alphabet res(konstr);
		Alphabet res;
		int temp = konstr.get_number_of_letters() + konstr1.get_number_of_letters();
		res.set_number_of_letters(temp);
		for (int i = 0; i < konstr.number_of_letters; i++)
		{
			res.alphabet[i] = konstr.alphabet[i];
		}
		for (int i = 0; i < konstr1.number_of_letters; i++)
		{
			res.alphabet[konstr.number_of_letters + i] = konstr1.alphabet[i];
		}
		res.normal_alphabet();
		return res;
	}
	//proverit
	std::string Alphabet::coding(int n, std::string strok)
	{
		const int slov = strok.size();
		int kolb = get_number_of_letters();
		char t[1] = { 'g' };
		char str[256] = {};
		for (int i = 0; i != slov; i++)
		{
			if (symbol_check(strok[i]) != 1)
			{
				throw std::invalid_argument("There are no such symbols in the alphabet");
			}
			else
			{
				int j = 0;
				while (j != kolb) {
					if (strok[i] == alphabet[j]) {
						t[0] = alphabet[(i + n) % kolb];
						j = kolb - 1;
					}
					j++;
				}
				str[i] = t[0];
			}
		}
		std::string strok1 = std::string(str);
		return strok1;
	}
	// proverit
	std::string Alphabet::decoding(int n, std::string strok)
	{
		const int slov = strok.size();
		int kolb = get_number_of_letters();
		char t[1] = { 'g' };
		char str[256] = {};
		int decode = 0;
		for (int i = 0; i != slov; i++)
		{
			if (symbol_check(strok[i]) != 1)
			{
				throw std::invalid_argument("There are no such symbols in the alphabet");
			}
			int j = 0;
			while (j != kolb) {
				if (strok[i] == alphabet[j]) {
					if (j - n < 0)
					{
						decode = get_number_of_letters() - (n - j);
						t[0] = alphabet[(decode) % kolb];
						j = kolb - 1;
					}
					else
					{
						t[0] = alphabet[(j - n) % kolb];
						j = kolb - 1;
					}
				}
				j++;
			}
			str[i] = t[0];
		}
		std::string strok1 = std::string(str);
		return strok1;
	}
	//доделать
	int Alphabet::symbol_check(char alh)
	{
		int kolb = get_number_of_letters();
		int otvet = 0;
		for (int i = 0; i != kolb; i++)
		{
			if (alh == alphabet[i])
			{
				otvet = 1;
				break;
			}
		}
		return otvet;
	}
	//проверить
	void Alphabet::normal_alphabet()
	{
		int temp = get_number_of_letters();
		std::set<char> mySet1;
		for (int i = 0; i < temp; i++) {
			mySet1.insert(get_aphabet(i));
		}
		std::set<char>::iterator it; 
		char a[10] = {};
		int i = 0;
		for (it = mySet1.begin(); it != mySet1.end(); it++) { 
			a[i] = *it;
			i = i + 1;
		}
		std::string strok1 = std::string(a);
		set_number_of_letters(i + 1);
		for (int i = 0; i < get_number_of_letters(); i++)
		{
			set_alphabet(i, a[i]);
		}
		for (int i = get_number_of_letters(); i < 100; i++)
		{
			set_alphabet(i, '\0');
		}
	}
}
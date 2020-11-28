#pragma once
#include <string>
#include <iostream>
namespace prog3 {
	class Alphabet {
	private:
		int number_of_letters;// ���� � ��������
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

		Alphabet();// ������ �����������
		Alphabet(int size_alphet);// ����������� � ��������� �� ������ �� �����
		Alphabet(std::string);// ����������� ��� ������// � ������� ��� ����� ������� ���������� ��������

		void set_number_of_letters(int);// ������ ��� ����
		void set_alphabet(int index, char ch);//������ ������� � ��������
		int get_number_of_letters()const;// ���� ������������ ������� ���� � ��������
		char get_aphabet(int f) const;// ����������� ������ ����� ������� ��������
		// ����������
		friend std::istream& operator>> (std::istream& in, Alphabet &konstr);//  �������� �����
		friend std::ostream& operator<< (std::ostream &out, const Alphabet &alpha );// �������� ������
		friend Alphabet operator+ ( const Alphabet& konstr, const Alphabet& konstr1);// �������� +
		Alphabet &operator+= (  Alphabet& konstr);// �������� +=
		// ��� �������
		std::string coding(int, std::string);// ����������� �����
		std::string decoding(int, std::string);// �������������� �����
		int symbol_check(char);// ������� ������� � ��������
		// ������� �������� �� ����������
		//static void  normal_alphabet(Alphabet& konstr);
		// ��������� ���������
		// ���� ����

	};
	//void getInt(int& a);
}
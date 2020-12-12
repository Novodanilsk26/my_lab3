#pragma once
#pragma once
#include <string>
#include <iostream>

namespace prog3 {
	class Alphabet {
	private:
		int number_of_letters;// ���� � ��������
		static const char help[73];
		char* alphabet;
		
		static void  normal_alphabet(Alphabet& konstr);
		//void  normal_alphabet();
	public:
		//������������

		Alphabet() :number_of_letters(), alphabet() {};//+// ������ �����������
		explicit Alphabet(int size_alphet);//+// ����������� � ��������� �� ������ �� �����
		Alphabet(const std::string& strok);//����������� ��� ������
		// �������������
		~Alphabet()
		{
			delete[] alphabet;
		}
		// ����������� �����������
		Alphabet(const Alphabet& drop);
		// ������������ �����������
		Alphabet(Alphabet&& drob): 
			number_of_letters(drob.number_of_letters),
			alphabet(drob.alphabet)
		{
			drob.number_of_letters = 0;
			drob.alphabet = nullptr;
		}
		// �������� � �������
		void set_number_of_letters(int);//+ ������ ��� ����// ������ �� ���������
		void set_alphabet(int index, char ch);// ������...//������ ������� � ��������
		int get_number_of_letters()const;//+ ���� ������������ ������� ���� � ��������//������ �� ���������
		char get_aphabet(int f) const;//+ ����������� ������ ����� ������� ��������// ������ �� ���������
		// ����������
		friend std::istream& operator>> (std::istream& in, Alphabet& konstr);//  �������� �����
		friend std::ostream& operator<< (std::ostream& out, const Alphabet& alpha);// �������� ������
		friend Alphabet operator+ (const Alphabet& konstr, const Alphabet& konstr1);// �������� +
		Alphabet& operator+=(Alphabet& konstr);
		//Alphabet& operator+= (Alphabet& konstr);// �������� +=
		Alphabet& operator= (const Alphabet& konstr);
		// ��� �������
		std::string coding(int, std::string);//+ ����������� �����// ������ �� ���������
		std::string decoding(int, std::string);//+ �������������� �����//������ �� ���������
		int symbol_check(char);//+ ������� ������� � ��������// ���� ���������� ���� �� ������� ���
		// ������� �������� �� ����������
		//static void  normal_alphabet(Alphabet& konstr);
		// ��������� ���������
		// ���� ����

	};
	void getInt(int& a);
	
}
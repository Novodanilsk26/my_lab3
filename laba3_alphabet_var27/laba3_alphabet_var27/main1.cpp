
#include "../Alphabet_Lib/Alphabet.h"
//#include "Dialog.h"
#include <stdio.h>
int main() 
{
	prog3::Alphabet A(7);
	prog3::Alphabet b(8);
	prog3::Alphabet c(7);
	c = b + A;
	std::cin >> A;
	std::cout << A;
	setlocale(0, "");
	std::cout << "����������, �������� ������ ������������� 1-��� �������:\n";
	//TernaryVectorClass::TernaryVector vector_1 = Lab2_A::Input();
	std::cout << "����������, �������� ������ ������������� 2-��� �������:\n";
	//prog3::dialog(A);
	return 0;
}

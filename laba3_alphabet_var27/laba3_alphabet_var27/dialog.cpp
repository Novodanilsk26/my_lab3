//#include "Dialog.h"
//using namespace std;
// namespace prog3{
//
//void getInt(int& a)
//{
//	while (1)
//	{
//		if (std::cin >> a)
//			break;
//
//		std::cin.clear();
//
//		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//		std::cout << "Try again!\n»";
//	}
//}
//
//void showOptions() {
//	cout << "\n*1* - \n";
//	cout << "*2* - Sector area between two radius\n";
//	cout << "*3* - Area of ??the figure N of the loop\n";
//	cout << "*4* - Area N of the spiral ring\n";
//	cout << "*5* - The long arc of the specified angle of radius\n";
//	cout << "*6* - Radius of curvature of the spiral depending on the angle\n";
//	cout << "*7* - Repeat Options\n";
//	cout << "*8* - Change the Const\n";
//	cout << "*9* - Klass\n";
//	cout << "*0* - Exit";
//} 
//
//int dialog( Alphabet MyObj) {
//	cout << "\n»Hi, now you have launched a program for working with Arhimed spiral!";
//	cout << "\n\n»So, lets start.\n\n»Enter Const\n»";
//	double A;
//	get(A);
//	MyObj.setCon(A);
//
//	showOptions();
//	int opt;
//	while (1)
//	{
//		cout << "\n\n»Chouse the Option:\n»";
//		cin >> opt;
//		if (opt == 0) {
//			cout << "\n»OK, Goodbye!\n";
//			return 0;
//		}
//}
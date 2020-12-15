#include "pch.h"

#include "pch.h"
#include "/Users/MI/source/repos/lab3_dynamic_alphabet/lab3_dynamic_alphabet/Alphabet_dynamic.h"
TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(AlphabetConstructor, Default_Constructor)
{
	prog3::Alphabet x;
	ASSERT_EQ(0, x.get_number_of_letters());
}

TEST(AlphabetConstructor, Number_tConstructor)
{
	prog3::Alphabet x(4);
	ASSERT_EQ(4, x.get_number_of_letters());
}

TEST(AlphabetConstructor, String_Constructor)
{
	prog3::Alphabet x("str");
	ASSERT_EQ(3, x.get_number_of_letters());
}

TEST(AlphabetConstructor, Copy_Constructor)
{
	prog3::Alphabet A("str");
	prog3::Alphabet x(A);
	ASSERT_EQ(3, x.get_number_of_letters());
}

TEST(AlphabetConstructor, Copy_Constructor)
{
	prog3::Alphabet A("str");
	prog3::Alphabet x(A);
	ASSERT_EQ(3, x.get_number_of_letters());
}

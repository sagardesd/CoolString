#include "stringops.hpp"
#include <algorithm>

void test_replace_all()
{
}

void test_split()
{
}

void test_find_all_occourance()
{
	std::cout << "TEST : test_find_all_occourance : START" << std::endl;
	std::string sourceString("is sagar is his job doing properis");
	IntVector posVect;
	posVect = cool::stringops::find_all_occourance(sourceString, " ");
	std::for_each(posVect.begin(), posVect.end(), [](int item){std::cout << item << std::endl;});
	std::cout << "TEST : test_find_all_occourance : END" << std::endl;
}

void test_remove_all_occourance()
{
	std::cout << "TEST : test_remove_all_occourance : START" << std::endl;
	std::string sourceString("is sagar is his job doing properis");
	cool::stringops::remove_all_occourance(sourceString, "is");
	std::cout << sourceString << std::endl;
	std::cout << "TEST : test_remove_all_occourance : END" << std::endl;
}

void test_remove_first_occourance()
{
	std::cout << "TEST : test_remove_first_occourance : START" << std::endl;
	std::string sourceString("is sagar is his job doing properis");
	cool::stringops::remove_first_occourance(sourceString, "is");
	std::cout << sourceString << std::endl;
	std::cout << "TEST : test_remove_first_occourance : END" << std::endl;
}

void test_remove_last_occourance()
{
	std::cout << "TEST : test_remove_last_occourance : START" << std::endl;
	std::string sourceString("is sagar is his job doing properis");
	cool::stringops::remove_last_occourance(sourceString, "is");
	std::cout << sourceString << std::endl;
	std::cout << "TEST : test_remove_last_occourance : END" << std::endl;
}

void test_trim_leading_spaces()
{
	std::cout << "TEST : test_trim_leading_spaces : START" << std::endl;
	std::string sourceString1("     is sagar is dumb");
	cool::stringops::trim_leading_spaces(sourceString1);
	std::cout << "Source string after trim :" << sourceString1 << std::endl;
	std::string sourceString2("This string is without space");
	cool::stringops::trim_leading_spaces(sourceString2);
	std::cout << "Source string after trim :" << sourceString2 << std::endl;
	std::cout << "TEST : test_trim_leading_spaces : END" << std::endl;
}

void test_trim_trailing_spaces()
{
	std::cout << "TEST : test_trim_trailing_spaces : START" << std::endl;
	std::string sourceString1("is sagar is dumb    ");
	cool::stringops::trim_trailing_spaces(sourceString1);
	std::cout << "Source string after trim :" << sourceString1 << std::endl;
	std::string sourceString2("    This string is without space");
	cool::stringops::trim_trailing_spaces(sourceString2);
	std::cout << "Source string after trim :" << sourceString2 << std::endl;
	std::cout << "TEST : test_trim_trailing_spaces : END" << std::endl;
}

int main()
{
	/*
	test_replace_all();
	test_split();
	test_find_all_occourance();
	test_remove_all_occourance();
	test_remove_first_occourance();
	test_remove_last_occourance();
	*/
	//test_trim_leading_spaces();
	test_trim_trailing_spaces();
}

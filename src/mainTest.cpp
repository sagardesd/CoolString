#include "stringops.h"
#include <algorithm>

void test_replaceAllOccuranceOfSubstr()
{
}

void test_splitString()
{
}

void test_findAllOccouranceOfSubstr()
{
	std::cout << "TEST : test_findAllOccouranceOfSubstr : START" << std::endl;
	cool::CoolStringOperation operations("is sagar is his job doing properis");
	IntVector posVect;
	operations.findAllOccouranceOfSubstr(posVect, " ");
	std::for_each(posVect.begin(), posVect.end(), [](int item){std::cout << item << std::endl;});
	std::cout << "TEST : test_findAllOccouranceOfSubstr : END" << std::endl;
}

void test_removeAllOccouranceOfSubstr()
{
	std::cout << "TEST : test_removeAllOccouranceOfSubstr : START" << std::endl;
	cool::CoolStringOperation operations("is sagar is his job doing properis");
	operations.removeAllOccouranceOfSubstr("is");
	std::cout << operations.get() << std::endl;
	std::cout << "TEST : test_removeAllOccouranceOfSubstr : END" << std::endl;
}

void test_removeFirstOccouranceOfSubstr()
{
	std::cout << "TEST : test_removeFirstOccouranceOfSubstr : START" << std::endl;
	cool::CoolStringOperation operations("is sagar is his job doing properis");
	operations.removeFirstOccouranceOfSubstr("is");
	std::cout << operations.get() << std::endl;
	std::cout << "TEST : test_removeFirstOccouranceOfSubstr : END" << std::endl;
}

void test_removeLastOccouranceOfSubstr()
{
	std::cout << "TEST : test_removeLastOccouranceOfSubstr : START" << std::endl;
	cool::CoolStringOperation operations("is sagar is his job doing properis");
	operations.removeLastOccouranceOfSubstr("is");
	std::cout << operations.get() << std::endl;
	std::cout << "TEST : test_removeLastOccouranceOfSubstr : END" << std::endl;
}

int main()
{
	test_replaceAllOccuranceOfSubstr();
	test_splitString();
	test_findAllOccouranceOfSubstr();
	test_removeAllOccouranceOfSubstr();
	test_removeFirstOccouranceOfSubstr();
	test_removeLastOccouranceOfSubstr();
}

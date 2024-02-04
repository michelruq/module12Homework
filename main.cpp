#include <iostream>
#include <string>
#include "checkingstringmultiples.h"

struct TestCase
{
	std::string originalText;
	std::uint32_t multiplicity;
	bool result;
};

TestCase TestCollection[] 
	{{"abcabcabcabc", 3, true},
	 {"abcabcabcabc", 0, false},
	 {"abcdabcdabcdabcd", 1, false},
	 {"abcdabcdabcdabcd", 2, false},
	 {"abcdabcdabcdabcd", 3, false},
	 {"abcdabcdabcdabcd", 4, true},
	 {"abcdabcdabcdabcd", 5, false},
	 {"abcdabcdebcdabcd", 4, false},
	 {"abcdaaaaebcdabcd", 4, false}};	
           

int main (int argc, char* argv[])
{
	for(std::uint32_t i{0}; i < sizeof(TestCollection)/sizeof(TestCase); ++i)
	{
	   	std::cout << "Test case " << i; 
		if(CheckingStringForMultiples::IsKPeriodic(TestCollection[i].originalText, TestCollection[i].multiplicity) == TestCollection[i].result)
		{
			std::cout << " correct" << std:: endl;
		}
		else
		{
			std::cout << " incorrect" << std:: endl;
		}
	}
	return 0;
}
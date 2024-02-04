#pragma once
#include <string>
#include <cstdint>

class CheckingStringForMultiples
{	
	public:
       static bool IsKPeriodic(const std::string& expression, std::uint32_t multiplicity);
};
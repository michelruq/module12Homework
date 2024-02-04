#include "checkingstringmultiples.h"

//Решение задачи имеет допущения, что
// - кратность К означает, что первые К символов строки являются паттерном для поиска
// - кратность К означает, что паттерн найденный в первых К символах будет повторяться периодически
// и строка не будет иметь включений кроме подстрок соответствующих паттерну
// сложность алгоритма, по моим оценкам, O(n) - потому что доступ к каждому элементу осуществляется однократно 

bool CheckingStringForMultiples::IsKPeriodic(const std::string& expression, std::uint32_t multiplicity)
{
   if(multiplicity != static_cast<std::uint32_t>(0))
   {
	   std::string pattern{};
	   for(std::uint32_t i{static_cast<std::uint32_t>(0)}; i < multiplicity; ++i)
	   {
		  pattern += expression[i];
	   }
	   std::string stringForChecking{};
	   for(std::uint32_t i{multiplicity}; i < expression.size(); ++i)
	   {
		   stringForChecking += expression[i];
		   if((( i % multiplicity) == (multiplicity - static_cast<std::uint32_t>(1))) && (i != multiplicity))
		   {
			  if(pattern != stringForChecking)
			  {
				 return false;
			  }
			  stringForChecking = "";
		   }
	   }
	   return true;
   }
   return false;
}
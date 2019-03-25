#ifndef SCRAMBLIES_CPP
#define SCRAMBLIES_CPP


#include "Scramblies.h"

namespace strelka_1
{
	/* The scramble function will return true or false if the characters in s1 can be
	arranged to form the word s2*/

	bool scramble(const std::string& s1, const std::string& s2) {
		//your code here
		size_t found1 = 0;
		size_t found2 = 0;
		for (int i = 0; i < s2.size(); i++)
		{
			found1 = std::count(s1.begin(), s1.end(), s2[i]);
			if (found1 == 0)
			{
				return false;
			}
			found2 = std::count(s2.begin(), s2.end(), s2[i]);
			if (found1 < found2)
			{
				return false;
			}
			else
			{
				continue;
			}
		}
		return true;
	};
}

#endif
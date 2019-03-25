#ifndef SCRAMBLIES_H
#define SCRAMBLIES_H


#include<iostream>
#include<algorithm>

namespace strelka_1
{
	/* The scramble function will return true or false if the characters in s1 can be
	arranged to form the word s2*/

	bool scramble(const std::string& s1, const std::string& s2);
}

#endif
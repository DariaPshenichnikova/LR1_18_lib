#include "pch.h"
#include "SubstringDll.h"

bool check_string(std::string a, std::string b)
{
	if (a.size() != b.size()) return false;
	std::sort(a.begin(), a.end());
	do {
		if (a == b) return true;
	} while (std::next_permutation(a.begin(), a.end()));
	return  false;
}

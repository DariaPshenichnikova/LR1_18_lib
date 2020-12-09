#pragma once
#ifdef SUBSTRINGDLL_EXPORTS
#define SUBSTRINGDLL_API __declspec(dllimport)
#else
#define SUBSTRINGDLL_API __declspec(dllexport)
#endif
#include <string>
#include <algorithm>
SUBSTRINGDLL_API bool check_string(std::string a, std::string b);
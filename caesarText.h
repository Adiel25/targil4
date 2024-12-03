#pragma once
#include <string>
#include <ostream>

class caesarText
{
	caesarText(std::string text);
	std::string encrypt(std::string text);
	std::string decrypt(std::string text);
	std::string encrypt();
	std::string decrypt();
	~caesarText();
};


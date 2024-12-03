#pragma once
#include <string>
#include <ostream>

class SubText
{
	SubText(std::string text, std::string dictionaryFileName);
	~SubText();
	std::string encrypt(std::string text, std::string dictionaryFileName);
	std::string decrypt(std::string text, std::string dictionaryFileName);
	std::string encrypt();
	std::string decrypt();
};


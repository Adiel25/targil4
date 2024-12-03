#pragma once
#include <string>
#include <ostream>

class ShiftText
{
public:
	ShiftText(std::string text, int key);
	std::string encrypt(std::string text, int key);
	std::string decrypt(std::string text, int key);

	std::string encrypt(int key);
	std::string decrypt(int key);
	~ShiftText();

private:
	bool _encrypted = false;
	std::string _text;
	std::string _text_encrypt;
};


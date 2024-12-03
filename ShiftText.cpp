#include "ShiftText.h"

std::string ShiftText::encrypt(std::string text, int key)
{
	return std::string();
}

std::string ShiftText::decrypt(std::string text, int key)
{
	return encrypt(text, 26 - key);
}

std::string ShiftText::encrypt(int key)
{
	if (!_encrypted) 
	{
		_text = encrypt(_text, key);
		_encrypted = true;
}

std::string ShiftText::decrypt(int key)
{
	if (_encrypted)) 
	{
		_text = decrypt(_text, key);
		_encrypted = false;

	}
}

#include "PlainText.h"
#include <string>
#include <ostream>


bool PlainText::isEncrypted(std::string _text, std::string _text_encrypt, bool _encrypted) const
{
	if (_text_encrypt == _text)
	{
		_encrypted = true;
	}
	else
	{
		_encrypted = false;
	}

	return _encrypted;
}

std::string PlainText::GetText(std::string _text) const
{
	return _text;
}



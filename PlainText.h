#pragma once
#include <string>
#include <ostream>


class PlainText
{
	
public:
	

	PlainText(std::string _text);
	bool isEncrypted(std::string _text, std::string _text_encrypt, bool _encrypted) const;
	std::string GetText() const;
	~PlainText();

private:

	bool _encrypted = false;
	std::string _text;
	std::string _text_encrypt;
};


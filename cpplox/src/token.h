#pragma once

#include "token_type.h"
#include <variant>
#include <string>

class Token{
private:
	TokenType type;
	std::string lexeme;
	std::variant<int, float, std::string> literal;
	int line;
	std::string toString(std::variant<int, float, std::string> literal) const;

public:

	Token() = default;
	Token(TokenType type, std::string lexeme,
		std::variant<int, float, std::string> literal, int line);

	std::string toString() const;

	std::variant<int, float, std::string> getLiteral();

	std::string getLiteralString();

	std::string getLexeme();

	TokenType getType();
	
};



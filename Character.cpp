#include "stdafx.h"
#include "Character.h"

std::ostream& operator<<(std::ostream& output, const Character& characterToPrint)
{
	output << characterToPrint.character;
	return output;
}

Character::Character(char letter)
{
	this->character = letter;
}

Character::Character(const Character& rightSIde)
{
	this->character = rightSIde.character;
}


Character::~Character()
{
	/* Intentionally left blank */
}
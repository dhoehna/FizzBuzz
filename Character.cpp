/*
what is this?
A very round about way to store a character.  But is needed for the Word class.
*/

#include "stdafx.h"
#include "Character.h"

/*-----------------------------------------------------------------------------
* @Name output operator
* @Description prints this character to the output stream
* @Param output a reference to the current output stream
* @param characterToPrint the characterObject to print
* @Return a reference to the current output stream.
*/
std::ostream& operator<<(std::ostream& output, const Character& characterToPrint)
{
	output << characterToPrint.character;
	return output;
}

/*-----------------------------------------------------------------------------
* @Name basic constructor
* @Description make a character object and stores the passed in character.
* @Param letter the letter to store.
*/
Character::Character(char letter)
{
	this->character = letter;
}

/*-----------------------------------------------------------------------------
* @Name copy constructor
* @Description make a Character from an existing CHaracter
* @Param rightSide the CHaracter to make a copy of.
*/
Character::Character(const Character& rightSIde)
{
	this->character = rightSIde.character;
}


/*-----------------------------------------------------------------------------
* @Name destructor
* @Description destroys everything by doing nothing.
*/
Character::~Character()
{
	/* Intentionally left blank */
}
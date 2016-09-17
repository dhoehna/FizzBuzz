/*
 WHAT IS THIS?
 This is basically a container of characters (The object).  Just a fancy way to store a sequence
 of characters.
*/

#include "stdafx.h"
#include "Word.h"

/*-----------------------------------------------------------------------------
* @Name: Operator <<
* @Description: prints the word to the output stream
* @Param: ouput a refrence to the current output stream
* @param: wordToPrint this.
*/
std::ostream& operator<<(std::ostream& output, const Word& wordToPrint)
{
	for (std::vector<Character*>::iterator cit = wordToPrint.word->begin(); cit != wordToPrint.word->end(); ++cit)
	{
		output << (*(*cit));
	}

	return output;
}

/*-----------------------------------------------------------------------------
* @Name: Constructor
* @Description: make a new word out of the passed in string.
* @param: word the string to make a word out of
*/
Word::Word(std::string word)
{
	this->word = new std::vector<Character*>();

	for (std::string::iterator sit = word.begin(); sit != word.end(); ++sit)
	{
		this->word->push_back(new Character(*sit));
	}
}


/*-----------------------------------------------------------------------------
* @Name Copy Constructor
* @Description make a deep copy of this.
* @param rightSide the word to copy.
*/
Word::Word(Word& rightSide)
{
	this->word = new std::vector<Character*>();
	for (std::vector<Character*>::iterator it = rightSide.word->begin(); it != rightSide.word->end(); ++it)
	{
		Character* thisCharacter = new Character(*(*it));
		this->word->push_back(thisCharacter);
	}
}


/*-----------------------------------------------------------------------------
* @Name Destructor
* @Description destroys everything.
*/
Word::~Word()
{
	for (std::vector<Character*>::iterator cit = this->word->begin(); cit != this->word->end(); ++cit)
	{
		delete (*cit);
		(*cit) = NULL;
	}

	delete this->word;
}

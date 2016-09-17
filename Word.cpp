#include "stdafx.h"
#include "Word.h"

std::ostream& operator<<(std::ostream& output, const Word& wordToPrint)
{
	for (std::vector<Character*>::iterator cit = wordToPrint.word->begin(); cit != wordToPrint.word->end(); ++cit)
	{
		output << (*(*cit));
	}

	return output;
}


Word::Word(std::string word)
{
	this->word = new std::vector<Character*>();

	for (std::string::iterator sit = word.begin(); sit != word.end(); ++sit)
	{
		this->word->push_back(new Character(*sit));
	}
}


Word::Word(Word& rightSide)
{
	this->word = new std::vector<Character*>();
	for (std::vector<Character*>::iterator it = rightSide.word->begin(); it != rightSide.word->end(); ++it)
	{
		Character* thisCharacter = new Character(*(*it));
		this->word->push_back(thisCharacter);
	}
}


Word::~Word()
{
	for (std::vector<Character*>::iterator cit = this->word->begin(); cit != this->word->end(); ++cit)
	{
		delete (*cit);
		(*cit) = NULL;
	}

	delete this->word;
}

#pragma once
#include <vector>
#include <string>
#include "Character.h"
class Word
{
public:
	friend std::ostream& operator<<(std::ostream& output, const Word& wordToPrint);
	Word(std::string word);
	Word(Word& rightSide);
	~Word();

private:
	std::vector<Character*>* word;
};


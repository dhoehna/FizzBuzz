#pragma once
#include <iostream>
class Character
{
public:
	friend std::ostream& operator<<(std::ostream& output, const Character&
		characterToPrint);


	Character(char character);
	Character(const Character& rightSide);
	~Character();

private:
	char character;
};


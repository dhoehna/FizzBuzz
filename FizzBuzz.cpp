// FizzBuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Word.h"
#include "FizzBuzzCounting.h"

void main()
{
	PrintFizzBuzz<100>::out(std::cout);
}


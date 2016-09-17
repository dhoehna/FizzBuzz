 #pragma once
#include <iostream>
#include "Word.h"
template <int N>
struct PrintFizzBuzz
{
	static void out(std::ostream& os)
	{
		PrintFizzBuzz<N-1>::out(os);
		static Word fizz("Fizz");
		static Word buzz("Buzz");
		static Word fizzBuzz("FizzBuzz");
		if (N % 5 == 0 && N % 3 == 0)
		{
			os << fizzBuzz << "\n";
		}
		else if (N % 5 == 0)
		{
			os << fizz << "\n";
		}
		else if (N % 3 == 0)
		{
			os << buzz << "\n";
		}
		else
		{
			os << N << "\n";
		}
	}
};

template<>
struct PrintFizzBuzz<1>
{
	static void out(std::ostream& os)
	{
		os << 1 << std::endl;
	}
};
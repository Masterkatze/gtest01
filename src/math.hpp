#pragma once

#include <stdexcept>
//template<typename T> T square(T in);

int square(int in);

template<typename T>
T div(T a, T b)
{
	if(b == 0)
	{
		throw std::invalid_argument("Division by zero");
	}

	return a / b;
}

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructoe are called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor are called" << std::endl;
	return;
}

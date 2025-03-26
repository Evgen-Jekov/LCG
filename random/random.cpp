#include <iostream>
#include "LCG.h"

int main()
{
    LCG num;
    
	for (int i = 0; i < 10; i++)
	{
		int number = num.random(10, 100);
		std::cout << number << std::endl;
	}
}
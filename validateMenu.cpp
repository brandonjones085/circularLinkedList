/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/15/2019
** Description:  The validateMenu function is usedto validate the user input in the menu function
It takes in a referense to an int and checks the type and whether it's between 1 and 6.
*******************************************************************************/

#include "validateMenu.h"

#include <iostream>

void validateMenu(int &i)
{
	while (!std::cin || (i < 1 && i > 7))
	{
		std::cin.clear();
		std::cin.sync();
		std::cout << "\nInvalid input! Try again: ";
		std::cin >> i;
	}
}
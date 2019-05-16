
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/15/2019
** Description:  The validateMenu function is usedto validate the user input in the menu function
It takes in a referense to an int and checks the type and whether it's between 1 and 6.
*******************************************************************************/


#include "menu.h"
#include "validateMenu.h"

#include <iostream>

int menu()
{

		int choice;
		std::cout << "\nWould you like to...\n\n";
		std::cout << "1. Add a value to the back of queue\n";
		std::cout << "2. Display the front value\n";
		std::cout << "3. Remove the front node\n";
		std::cout << "4. Display the queue's content\n";
		std::cout << "5. Exit\n\n";

		std::cin >> choice;
		validateMenu(choice);


		return choice;


}
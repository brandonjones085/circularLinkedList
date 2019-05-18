
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/15/2019
** Description:  The menu function returns an int according to the users choice. 
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
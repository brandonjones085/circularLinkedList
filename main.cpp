/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/15/2019
** Description:  The validateMenu function is usedto validate the user input in the menu function
It takes in a referense to an int and checks the type and whether it's between 1 and 6.
*******************************************************************************/



#include "menu.h"
#include "Queue.h"

#include <iostream>

int main()
{
	std::cout << "\nWelcome to the circular linked list\n\n"; 
	int num = menu(); 

	while (num != 5)
	{
		if (num == 1)
		{
			//Add a value to back of queue
			int num = menu();
		}
		else if (num == 2)
		{
			//Display the front value
			int num = menu();
		}
		else if (num == 3)
		{
			//remove the front node
			int num = menu();
		}
		else if (num == 4)
		{
			//display the queue's content
			int num = menu();
		}

	}

	std::cout << "\n\nGoodbye\n";


	return 0; 

}

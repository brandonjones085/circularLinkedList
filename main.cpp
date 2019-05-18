/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/15/2019
** Description:  This is the main file the program is run within. 
*******************************************************************************/



#include "menu.h"
#include "Queue.h"

#include <iostream>

int main()
{
	std::cout << "\nWelcome to the circular linked list\n\n"; 
	int num = menu(); //returns an int
	Queue q; 

	


	while (num != 5)
	{
		if (num == 1)
		{
			//Add a value to backq of queue
			int in; 
			std::cout << "\nWhat number would you like to add: "; 

			std::cin >> in; 
			q.addNode(in); 
			
			num = menu();
		}
		else if (num == 2)
		{
			//Display the front value
			std::cout << "\n\nThe node head is " << q.getFront() << std::endl;

			num = menu();
		}
		else if (num == 3)
		{
			//remove the front node
			q.removeFront(); 
			//q.printQueue(); 
			 num = menu();

		}
		else if (num == 4)
		{
			//display the queue's content
			q.printQueue();
			 num = menu();
		}

	}

	std::cout << "\n\nGoodbye\n";


	return 0; 

}

/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/15/2019
** Description:  The validateMenu function is usedto validate the user input in the menu function
It takes in a referense to an int and checks the type and whether it's between 1 and 6.
*******************************************************************************/


#include "Queue.h"

#include <iostream>


Queue::Queue()
{
	QueueNode* head = nullptr;
	QueueNode* tail = nullptr;
	QueueNode* n = nullptr;
}

/*******************************************************************************
** Description:  Returns true is the queue is empty or true if it is not
*******************************************************************************/

bool Queue::isEmpty() 
{
	if (head == nullptr)
	{
		//if head is empty
		return true; 
	}
	else
	{
		//list not empty
		return false; 
	}
}


/*******************************************************************************
** Description:  Prints all the nodes in the linked list
*******************************************************************************/

void Queue::printQueue()
{
	QueueNode* temp = head;

	while (temp != nullptr)
	{
		std::cout << temp->val << " "; 
		temp = temp->next;
	}
}


/*******************************************************************************
** Description:  Takes in an int and adds it to the end of the linked list
*******************************************************************************/
void Queue::addNode(int val)
{
	if (isEmpty())
	{
		head = new QueueNode(val); 
		
		
	}
	else
	{
		QueueNode *ptr = head; 
		while (ptr->next != nullptr)
		{
			ptr = ptr->next; 
		}
		ptr->next = new QueueNode(val); 
	}
}


/*******************************************************************************
** Description:  Destructor frees all the memory from the queue.
*******************************************************************************/

Queue::~Queue()
{
	QueueNode* temp = head; 
	QueueNode* next; 

	while (temp != nullptr)
	{
		next = temp->next;
		delete temp; 
		temp = next; 
	}


}

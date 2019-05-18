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
		return false;
	}
	else
	{
		//list not empty
		return true; 
	}
}


/*******************************************************************************
** Description:  Prints all the nodes in the linked list
*******************************************************************************/

void Queue::printQueue()
{
	QueueNode* temp = head;
	if (isEmpty())
	{
		
		do
		{
			std::cout << temp->val << " ";
			temp = temp->next;
		} while (temp != head);
	}
	else
	{
		std::cout << "\n\nCannot print an empty list\n\n"; 
	}
	
}

/*******************************************************************************
** Description:  Displays the first value in the linked list
*******************************************************************************/
int Queue::getFront()
{
	return head->val; 
}


/*******************************************************************************
** Description:  Takes in a QueueNode pointer and sets it as the head
*******************************************************************************/
void Queue::setNodeHead(QueueNode* i)
{
	if (i != nullptr)
	{
		head = i; 
	}
}

/*******************************************************************************
** Description:  Removes the front node of the list. 
*******************************************************************************/
void Queue::removeFront()
{

	QueueNode *prev = head, *firstNode = head; 

	if (!isEmpty())
	{
		std::cout << "\n\nThe node cannot be deleted\n\n"; 
	}
	else
	{
		while (prev->next != head)
		{
			prev = prev->next; 
		}
		prev->next = firstNode->next; 

		head = prev->next; 
		delete firstNode; 

	}
}



/*******************************************************************************
** Description:  Takes in an int and adds it to the end of the linked list
*******************************************************************************/
void Queue::addNode(int val)
{
	QueueNode *ptr = head;

	QueueNode *newVal = (struct QueueNode *)malloc(sizeof(struct QueueNode));
	newVal->val = val;
	newVal->next = head; //points back to head node

	if (isEmpty())
	{
		while (ptr->next != head)
		{
			ptr = ptr->next;
		}
		ptr->next = newVal;
		
	}
	//If only a single node
	else
	{
		newVal->next = newVal;
		head = newVal;
		setNodeHead(head);

	}
}

/*******************************************************************************
** Description:  Destructor frees all the memory from the queue.
*******************************************************************************/

Queue::~Queue()
{
	QueueNode* temp = head; 
	QueueNode* next; 

	while (temp != tail->next)
	{
		next = temp->next;
		delete temp; 
		temp = next; 
	}


}

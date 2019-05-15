#include "Queue.h"

#include <iostream>


Queue::Queue()
{
	QueueNode* head = nullptr;
	QueueNode* tail = nullptr;
	QueueNode* n = nullptr;
}


bool Queue::isEmpty()
{
	return head == nullptr; 
}

void Queue::printQueue()
{
	QueueNode* temp = head;

	while (temp != nullptr)
	{
		std::cout << temp->val << " "; 
		temp = temp->next;
	}
}


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

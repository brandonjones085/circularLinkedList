/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/07/2019
** Description:  The header file for the Queue class
*******************************************************************************/

#ifndef NODE_HPP
#define NODE_HPP

class Queue
{
private: 
	struct QueueNode
	{
		int val; 
		QueueNode* next = nullptr; 
		QueueNode* prev = nullptr; 
		QueueNode(); 
		QueueNode(int in)
		{
			val = in; 
		};
	};

	QueueNode* head; 
	QueueNode* tail;
	QueueNode* n;
	int nodeHead; 


public:
	Queue();
	bool isEmpty(); 
	void printQueue(); 
	void addNode(int); 
	int getFront(); 
	void setNodeHead(QueueNode*);
	int getNodeHead(); 
	~Queue();
};


#endif

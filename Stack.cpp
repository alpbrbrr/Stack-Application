#include "Stack.h"

Stack::Stack()
{
	top = -1; //top is set to -1 to indicate that no elements
}			  //initially reside in the stack

bool Stack::push(int newItem)
{
	if(top==MAXCAPACITY-1)
	{
		return false;	//the stack is full and push op. can't be implemented
	}
	if(newItem == -1000000) //if no item exists, peek function will return 
	{						//-1000000. So, it is forbidden to push -1000000.
		return false;
	}
	numbers[++top] = newItem;
	return true;
}

bool Stack::pop()
{
	if(isEmpty())
	{
		return false; //if no item exists, pop can't be done
	}
	top--;
	return true;
}

bool Stack::isEmpty() const
{
	return top==-1;
}

int Stack::peek() const
{
	if(isEmpty())
	{
		return -1000000;
	}
	else 
	{
		return numbers[top];
	}
}

void Stack::printItems() const
{
	if(!isEmpty())
	{
		for(int i=0; i<top-1; i++)
		{
			printf("%d ", numbers[i]);
		}
	}
}

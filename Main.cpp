#include "Stack.h"
#include <iostream>
#include <stdio.h>

//using namespace std;

int main()
{
	Stack* myStack = new Stack();
	bool isEmpt = true;
	//myStack->push(10);
	myStack->push(23);
	myStack->push(12);
	myStack->push(100);
	myStack->push(20);
	myStack->push(10);
	myStack->push(305);
	myStack->push(40);
	myStack->push(10);
	myStack->push(100);
	
	
	printf("The last 3 items on the stack\n");
	int topItem;
	for(int i =3; i>0;i--)
	{
		topItem = myStack->peek();
		myStack->pop();
		printf("%d\n", topItem);
	}
	
	isEmpt = myStack->isEmpty();
	
	if(isEmpt)
	{
		printf("\nNow, the stack is empty.");
	}
	else
	{
		printf("\nThe remaining elements in the stack:\n");
	}
	
	myStack->printItems();
	
	
}

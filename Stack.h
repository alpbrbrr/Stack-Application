#ifndef STACK_
#define STACK_
#include <iostream>
#define MAXCAPACITY 100
class Stack
{
private:
	int top;
	int numbers[MAXCAPACITY];

public:
	Stack();
	bool push(int newItem);
	bool pop();
	bool isEmpty() const;
	int peek() const;
	void printItems() const;	
};

#endif

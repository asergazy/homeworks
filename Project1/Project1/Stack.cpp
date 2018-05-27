#include "Stack.h"



Stack::Stack()
{
}


Stack::~Stack()
{
}

void Stack::push(char symbol)
{
	iterator++;
	if (iterator <= 4)
	{
		this->data[iterator] = symbol;
	}
	else
	{
		cout << "Stack is full" << endl;
	}
}

void Stack::pop()
{
	if (iterator >= 0)
	{
		iterator--;
	}
	else
	{
		cout << "Stack is empty" << endl;
	}
}

void Stack::peek()
{
	cout << data[iterator] << endl;
}

void Stack::getData()
{
	for (int i = 0; i<iterator + 1; i++)
		cout << data[i] << "";
}

int Stack::getNumberOfSymbols()
{
	return iterator + 1;
}

bool Stack::isEmpty()
{
	if (iterator == -1)
		return true;
	else
		return false;
}

bool Stack::isFull()
{
	if (iterator == 4)
		return true;
	else
		return false;
}

void Stack::cleanData()
{
	for (int i = 0; i<iterator + 1; i++)
		data[i] = 0;
}

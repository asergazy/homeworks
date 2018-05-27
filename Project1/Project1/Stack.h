#pragma once
#include <iostream> 

using namespace std;


class Stack
{
private:
	char data[5];

public:
	Stack();
	~Stack();
	static int iterator;

	void push(char symbol);
	void pop();
	void peek();
	void getData();
	int getNumberOfSymbols();
	bool isEmpty();
	bool isFull();
	void cleanData();
};


#pragma once
#include <iostream> 

using namespace std;


class Stack
{
private:
	char *data;
	int size;
public:
	Stack();
	Stack(int);
	~Stack();
	static int iterator;

	void push(char);
	void pop();
	void peek();
	void getData();
	int getNumberOfSymbols();
	bool isEmpty();
	bool isFull();
	void cleanData();
};


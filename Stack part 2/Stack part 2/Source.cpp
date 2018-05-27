#include <iostream> 
#include "StackDyn.h"

using namespace std;

int Stack::iterator = -1;

int main()
{

	Stack s(7);
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');
	s.push('E');
	s.push('F');
	s.getData();
	cout << endl << "After pop" << endl;
	s.pop();
	s.pop();
	s.getData();
	cout << endl << "After push" << endl;
	s.push('G');
	s.push('H');
	s.getData();
	cout << endl << "Iterator: " << Stack::iterator << endl;
	cout << endl << "Number of symbols in Stack: " << s.getNumberOfSymbols() << endl;
	cout << endl << "Is empty: " << s.isEmpty() << endl;
	cout << endl << "Is full: " << s.isFull() << endl;
	s.peek();
	s.cleanData();
	s.getData();
	system("pause");
	return 0;
}
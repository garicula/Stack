// Garrick Morley
// CPSC 200 Project 3 A
// This program uses the stack function

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath>
#include <fstream>
#include <cassert>
using namespace std;

class intStack
	{
	public:
		//add item to tos (top of stack)
		void push (int item);
		
		//remove and return item from tos
		int pop();
		
		//constructor
		intStack();
	
	private:
		//make it's array
		int stack[1000];
		
		//make counter
		int sp;	
	};
	
void intStack::push (int item)
	{
		stack[sp] = item;
		sp++;
	}

int intStack::pop()
	{
		int item = stack[sp-1];
		sp--;
		return item;
	}
	
intStack::intStack()
{
	//cout << "Called the constructor\n";
	sp = 0;
}

main()
{
	int num;
	int count = 0;
	cout << "Size of num is: " << sizeof(5) << endl;
	
	intStack digits;
	
	
	cout << "Enter a number (integer): " << endl;
	cin >> num;
	
	while(num > 0)
	{
		digits.push(num % 10);
		num /= 10;
		count++;
	}
	
	while(count > 0)
	{
		cout << digits.pop() << endl;
		count--;
	}
}






















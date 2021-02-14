#pragma once
#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

class Stack
{
	int* arr;
	int count;
public:
	Stack();
	~Stack();

	void push(int item);
	int pop();
	int peek();
	void Show();
	int getCount()const;
};


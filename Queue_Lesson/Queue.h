#pragma once
#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

class Queue
{
	int* arr;
	int count;
	int capasity;
public:
	Queue(int capasity);
	~Queue();

	void add(int item);
	int extract();
	void clear();
	bool isEmpty();
	bool isFull();
};


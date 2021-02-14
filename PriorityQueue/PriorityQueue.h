#pragma once
#include <iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

class PriorityQueue
{
	// Очередь
	int* arr;
	// Приоритеты
	int* priorities;
	// Фактический размер
	int count;
	// Общий размер
	int capasity;
public:
	PriorityQueue(int capacity);
	~PriorityQueue();

	void add(int item, int priority);
	int extract();
	void clear();
	bool isEmpty();
	bool isFull();
	int getCount();
	int getCapasity();
	void show();
	void showByPriorities();
};


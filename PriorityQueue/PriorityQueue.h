#pragma once
#include <iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

class PriorityQueue
{
	// �������
	int* arr;
	// ����������
	int* priorities;
	// ����������� ������
	int count;
	// ����� ������
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


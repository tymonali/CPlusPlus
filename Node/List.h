#pragma once
#include"Node.h"
class List
{
	Node* head;	// голва списка
	Node* tail;	// хвост списка
	int count;	// количество элементов в списке
public:
	List();
	~List();
	void addToTail(int value);
	void addToHead(int value);
	void removeFromTail();
	void removeFromHead();
	void removeAt(int index);
	void insert(int value, int index);
	bool isEmpty();
	void print();
	int getCount();
	void clear();
};


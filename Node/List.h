#pragma once
#include"Node.h"
class List
{
	Node* head;	// ����� ������
	Node* tail;	// ����� ������
	int count;	// ���������� ��������� � ������
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


#pragma once
#include"Leaf.h"

class Tree
{
	Leaf* root;		//������ ������

public:
	// �����������
	Tree();
	// ����������
	~Tree();

	// ����� ������ ������������ ����������� ����
	void print(Leaf* leaf);
	// ����� ������������
	Leaf* minimum();
	// ����� �������������
	Leaf* maximum();
	// ������� ������ ����
	void insert(int value);
	// ��������� �����
	Leaf* getRoot();
	// ������� ������
	void clear(Leaf* leaf);
	//�����
	Leaf* search(const Leaf* leaf, int value);
	// �������� ����
	void remove(Leaf* leaf);// ����������� �����
};


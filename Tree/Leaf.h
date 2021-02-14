#pragma once
#include<iostream>
#include<Windows.h>
#include <iomanip>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

struct Leaf
{
	int value;		// �������� ����
	Leaf* parent;	// ��������� �� ��������
	Leaf* left;		// ��������� �� ������ �������
	Leaf* right;	// ��������� �� ������� �������

	Leaf(int value = 0);
};


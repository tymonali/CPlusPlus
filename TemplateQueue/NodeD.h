#pragma once
#include<iostream>
#include<Windows.h>

using std::cout;
using std::cin;
using std::endl;

template <typename T>
struct Node
{
	T value;		//�������� ������
	Node* next;		//��������� �� ��������� �������
	Node* prev;		//��������� �� ���������� �������

	Node();
};


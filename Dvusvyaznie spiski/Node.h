#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

struct Node
{
	int value;	//�������� ������
	Node* next;	// ��������� �� ��������� �������
	Node* prev;	// ��������� �� ����������� �������

	Node();	// ����������� �� ���������
};


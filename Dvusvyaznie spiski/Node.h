#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

struct Node
{
	int value;	//значение списка
	Node* next;	// указатель на следующий элемент
	Node* prev;	// указатель на предъидущий элемент

	Node();	// конструктор по умолчанию
};


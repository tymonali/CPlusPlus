#pragma once
#include<iostream>
#include<Windows.h>

using std::cout;
using std::cin;
using std::endl;

template <typename T>
struct Node
{
	T value;		//значение списка
	Node* next;		//указатель на следующий элемент
	Node* prev;		//указатель на предыдущий элемент

	Node();
};


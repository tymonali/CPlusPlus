#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;
struct Node
{
	int value;	// значение узла
	Node* next;	// указатель на следующий элемент

	Node();
};
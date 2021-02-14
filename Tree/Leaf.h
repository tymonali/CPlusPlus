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
	int value;		// «начение узла
	Leaf* parent;	// ”казатель на родител€
	Leaf* left;		// ”казатель на левого потомка
	Leaf* right;	// ”казатель на правого потомка

	Leaf(int value = 0);
};


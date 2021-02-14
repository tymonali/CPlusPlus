#pragma once
#include <iostream>
#include<Windows.h>
#include<iomanip>
#include"Function_For_Array.h"
using namespace std;

class DynamicArray
{
	int* arr;
	int capasity;
	int count;
public:
	DynamicArray();
	DynamicArray(int capasity);
	~DynamicArray();
	int getCount();
	int getCapasity();
	void Show();
	void Add(int item);
	void Incert(int index,int item);
	void RemoveAt(int index);
	int FirstIndexOf(int item);
	int LastIndexOf(int item);
	void resize(int size);
};


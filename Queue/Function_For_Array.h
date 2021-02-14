#pragma once
#include"DynamicArray.h"
int* CreateCPP(int n);// C++ способ создания динамического массива
int* CreateC(int n);// С - шный способ создания динамического массива
int* InsertPosCPP(int* mas, int& n, int pos, int el); // Расширение массива на один элемент
int* InsertPosC(int* mas, int& n, int pos, int el); // Расширение массива на один элемент
void Copy(int* mas1, int* mas2, int n);
#pragma once
#include"DynamicArray.h"
int* CreateCPP(int n);// C++ ������ �������� ������������� �������
int* CreateC(int n);// � - ���� ������ �������� ������������� �������
int* InsertPosCPP(int* mas, int& n, int pos, int el); // ���������� ������� �� ���� �������
int* InsertPosC(int* mas, int& n, int pos, int el); // ���������� ������� �� ���� �������
void Copy(int* mas1, int* mas2, int n);
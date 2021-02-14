#include "Function_For_Array.h"

int* CreateCPP(int n)
{
    int* mas = new int[n];// ��������� �� ����� �������� �������� ������� � ����
                          // int* mas = new int[n] {}; ������ �� �����
    return mas;// ���������� � main() ������� ��. �������
}

int* CreateC(int n)
{
    int* mas = (int*)malloc(n * sizeof(int));// malloc - memory allocation
                                           // (n*sizeof(int) - ������ � ������ ����� �������
                                           // int* mas = (int*)calloc(n,sizeof(int)); - ������ ��
                                           // ����� (� - ���� ������)
    return mas;
}

int* InsertPosCPP(int* mas, int& n, int pos, int el)
{
    //1 2 3 4 5
    int* mas2 = new int[n + 1]; //_ _ _ _ _ _ ������ �������� �� 1 ��.
    for (int i = 0; i < pos; i++)
    {
        mas2[i] = mas[i];// 1 2 _ _ _ _ ���������� ������ �� �������
    }
    mas2[pos] = el;// 1 2 100 _ _ _ �������� ������ ��.
    for (int i = pos; i < n; i++)
    {
        mas2[i + 1] = mas[i];// 1 2 100 3 4 5 ���������� ������ ����� �������
    }
    delete[] mas;// ������� ������ ������
    mas = mas2;// ��������� ����� ������ ������ ����������
    n++;// ��������� ������ �������
    return mas;
}

int* InsertPosC(int* mas, int& n, int pos, int el)
{
    //1 2 3 4 5
    mas = (int*)realloc(mas, (n + 1) * sizeof(int));// ��������� ������ �� �������
    for (int i = n; i > pos; i--)
    {
        mas[i] = mas[i - 1];// 1 2 3 3 4 5
    }
    mas[pos] = el;
    n++;
    return mas;
}

void Copy(int* mas1, int* mas2, int n)
{
    for (int i = 0; i < n; i++)
    {
        mas2[i] = mas1[i];
    }
}

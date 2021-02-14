#include "Function_For_Array.h"

int* CreateCPP(int n)
{
    int* mas = new int[n];// Указатель на адрес нулевого элемента массива в куче
                          // int* mas = new int[n] {}; Массив из нулей
    return mas;// Возвращаем в main() нулевой эл. массива
}

int* CreateC(int n)
{
    int* mas = (int*)malloc(n * sizeof(int));// malloc - memory allocation
                                           // (n*sizeof(int) - размер в байтах всего массива
                                           // int* mas = (int*)calloc(n,sizeof(int)); - массив из
                                           // нулей (С - шный способ)
    return mas;
}

int* InsertPosCPP(int* mas, int& n, int pos, int el)
{
    //1 2 3 4 5
    int* mas2 = new int[n + 1]; //_ _ _ _ _ _ Массив увеличен на 1 эл.
    for (int i = 0; i < pos; i++)
    {
        mas2[i] = mas[i];// 1 2 _ _ _ _ Переписали массив до вставки
    }
    mas2[pos] = el;// 1 2 100 _ _ _ Вставили нужный эл.
    for (int i = pos; i < n; i++)
    {
        mas2[i + 1] = mas[i];// 1 2 100 3 4 5 переписали массив после вставки
    }
    delete[] mas;// Удалили старый массив
    mas = mas2;// Присвоили новый массив старой переменной
    n++;// Увеличили размер массива
    return mas;
}

int* InsertPosC(int* mas, int& n, int pos, int el)
{
    //1 2 3 4 5
    mas = (int*)realloc(mas, (n + 1) * sizeof(int));// Расширили массив на единицу
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

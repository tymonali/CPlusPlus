#include<iostream>
#include<stdio.h>
#include<io.h>	// Библиотека для поиска файлов

using namespace std;

int main()
{
	_finddata_t* info = new _finddata_t;
	// поиск директории
	// *.* - все файлы
	// Поиск директории
	long findHandle = _findfirst("C:\\*.*",info);
	// Временный дескриптор для прохода по директориям
	long tmpHandle = findHandle;

	while (tmpHandle != -1)
	{
		cout << info->name << " " << info->size/102400 << endl;
		// Переход к следующему файлу
		tmpHandle = _findnext(findHandle, info);
	}

	delete info;
	// Закрытие дескриптора
	_findclose(findHandle);

	return 0;
}
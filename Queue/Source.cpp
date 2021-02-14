#include"DynamicArray.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color B0");

	DynamicArray arr(3);

	arr.Add(10);
	arr.Add(20);
	arr.Add(30);
	arr.Add(40);
	arr.Add(60);
	arr.Add(70);
	arr.Add(80);

	//arr.RemoveAt(2);

	arr.Show();

	return 0;
}
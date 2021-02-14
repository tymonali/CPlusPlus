#include "Stack.h"

Stack::Stack()
{
	cout << "Конструктор по умолчанию Stack()\n";
	Sleep(100);
	count = 0;
	arr = new int[10];
}

Stack::~Stack()
{
	cout << "Деструктор Stack()\n";
	Sleep(100);
	delete[] arr;
}

void Stack::push(int item)
{
	cout << "push()\n";
	Sleep(100);
	arr[count++] = item;
}

int Stack::pop()
{
	cout << "pop()\n";
	Sleep(100);
	int item = peek();
	memcpy(arr, arr, sizeof(int) * (count - 1));
	count--;
	return item;
}

int Stack::peek()
{
	cout << "peek()\n";
	Sleep(100);
	return arr[count - 1];
}

void Stack::Show()
{
	int chertochka = 4 * count;
	cout << "===========================\n";
	cout << "Объект класса Stack:\n";
	cout << "---------------------------\n";
	for (int i = 0; i < chertochka; i++)
	{
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < count; i++)
	{
		cout << setw(3) << arr[i] << "|";
	}
	cout << "\n";
	for (int i = 0; i < chertochka; i++)
	{
		cout << "-";
	}
	cout << "\n";
	cout << "---------------------------\n";
	cout << "Count = " << count << "\n";
	/*cout << "---------------------------\n";
	cout << "Capasity = " << capasity << "\n";*/
	cout << "===========================\n";
	//system("pause");
}

int Stack::getCount() const
{
	return count;
}

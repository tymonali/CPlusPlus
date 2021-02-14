#include "DynamicArray.h"

DynamicArray::DynamicArray()
{
	std::cout << "Конструктор по умолчанию DynamicArray()!!!\n";
	Sleep(1000);
	this->arr = nullptr;
	this->capasity = this->count = 0;
}

DynamicArray::DynamicArray(int capasity)
{
	std::cout << "Коструктор с параметром DynamicArray!!!\n";
	Sleep(1000);
	this->capasity = capasity;
	this->count = 0;
	this->arr = CreateCPP(capasity);
}

DynamicArray::~DynamicArray()
{
	std::cout << "Деструктор DynamicArray!!!\n";
	Sleep(1000);
	delete[] arr;
}

int DynamicArray::getCount()
{
	return count;
}

int DynamicArray::getCapasity()
{
	return capasity;
}

void DynamicArray::Show()
{
	int chertochka = 4 * count;
	cout << "===========================\n";
	cout << "Объект класса DynamicArray:\n";
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
	cout << "---------------------------\n";
	cout << "Capasity = " << capasity << "\n";
	cout << "===========================\n";
}

void DynamicArray::Add(int item)
{
	if (count == capasity) 
	{
		resize(2);
	}
	arr[count++] = item;
}

void DynamicArray::Incert(int index, int item)
{
}

void DynamicArray::RemoveAt(int index)
{
	int* tmp = new int[count - 1];
	if (count > index)
	{
		int idx = 0;
		for (int i = 0; i < count; i++)
		{
			if (i != index)
			{
				tmp[idx++] = arr[i];
			}
		}
		delete[] arr;
		count--;
		arr = tmp;
	}
}

int DynamicArray::FirstIndexOf(int item)
{
	for (int i = 0; i < count; i++)
	{
		if (arr[i] == item)
		{
			return i;
		}
	}
	return -1;
}

int DynamicArray::LastIndexOf(int item)
{
	for (int i = count - 1; i >= 0; i--)
	{
		if (arr[i] == item)
		{
			return i;
		}
	}
	return -1;
}

void DynamicArray::resize(int size)
{
	int newSize = capasity + size;
	int* tmp = new int[newSize];
	Copy(arr, tmp, count);
	delete[] arr;
	capasity = newSize;
	arr = tmp;
}

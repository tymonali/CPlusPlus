#include "Queue.h"

Queue::Queue(int capasity)
{
	cout << "Queue(int capacity)\n";
	Sleep(100);
	this->capasity = capasity;
	arr = new int[capasity];
}

Queue::~Queue()
{
	cout << "~Queue()\n";
	Sleep(100);
	delete[] arr;
}

void Queue::add(int item)
{
	/*cout << "add()\n";
	Sleep(100);*/
	if (!isFull())
	{
		arr[count++] = item;
	}
}

int Queue::extract()
{
	/*cout << "extrtact()\n";
	Sleep(100);*/
	if (!isEmpty())
	{
		int first = arr[0];
		// сдвиг влево
		memcpy(arr, arr + 1, sizeof(int) * (count - 1));
		count--;
		// Кольцевая очередь
		// arr[count - 1] = first;
		return first;
	}
	return 0;
}

void Queue::clear()
{
	cout << "clear()\n";
	Sleep(100);
	count = 0;
}

bool Queue::isEmpty()
{
	return count ==0;
}

bool Queue::isFull()
{
	return count == capasity;
}

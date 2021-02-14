#include "PriorityQueue.h"

PriorityQueue::PriorityQueue(int capasity)
{
	this->capasity = capasity;
	count = 0;
	arr = new int[capasity];
	priorities = new int[capasity];
}

PriorityQueue::~PriorityQueue()
{
	delete[] arr;
	delete[] priorities;
}

void PriorityQueue::add(int item, int priority)
{
	if (!isFull())
	{
		arr[count] = item;
		priorities[count] = priority;
		count++;
	}
}

int PriorityQueue::extract()
{
	if (!isEmpty())
	{
		int maxPriority = priorities[0];
		int maxPriorityidx = 0;

		// Поиск максимального приоритета
		for (int i = 0; i < count; i++)
		{
			if (maxPriority < priorities[i])
			{
				maxPriority = priorities[i];
				maxPriorityidx = i;
			}
		}
		// Получение максимального элемента
		int maxElem = arr[maxPriorityidx];

		// Сдвиг элементов
		for (int i = maxPriorityidx; i < count-1; i++)
		{
			arr[i] = arr[i + 1];
			priorities[i] = priorities[i + 1];
		}
		count--;
		return maxElem;
	}
	else
	{
		return -1;
	}
}

void PriorityQueue::clear()
{
	count = 0;
}

bool PriorityQueue::isEmpty()
{
	return count == 0;
}

bool PriorityQueue::isFull()
{
	return count == capasity;
}

int PriorityQueue::getCount()
{
	return count;
}

int PriorityQueue::getCapasity()
{
	return capasity;
}

void PriorityQueue::show()
{
	cout << "-=Elements=-" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << setw(3) << arr[i] << "|";
	}
	cout << endl;
	cout << "-=Priorities=-" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << setw(3) << priorities[i] << "|";
	}
	cout << endl;
}

void PriorityQueue::showByPriorities()
{
	cout << "-=Elements=-" << endl;
	while(!isEmpty())
	{
		cout << setw(3) << extract() << "|";
	}
	cout << endl;
}

#include "PriorityQueue.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color B0");
	srand(time(0));

	PriorityQueue q(30);

	for (int i = 0; i < 20; i++)
	{
		int item = rand() % 100 + 1;
		int priority = rand() % 5 + 1;
		q.add(item, priority);
	}

	q.show();
	q.showByPriorities();


	return 0;
}
#include"LincedList.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color B0");

	LinkedList list;

	list.addToTail(10);
	list.addToTail(20);
	list.addToTail(30);
	list.addToTail(40);
	list.addToTail(50);
	list.addToTail(60);

	list.addToHead(100);
	list.addToHead(200);

	list.removeFromTail();
	list.removeFromTail();
	
	list.removeFromHead();

	list.insert(500, 2);

	list.print();

	system("pause");

	return 0;
}
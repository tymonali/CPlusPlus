#include "List.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color B0");

	List list;
	list.addToTail(10);
	list.addToTail(20);
	list.addToTail(30);
	list.addToTail(40);
	list.addToHead(200);
	list.addToHead(300);
	/*list.removeAt(2);
	list.removeAt(0);
	list.removeAt(4);*/
	list.insert(500, 4);
	list.print();
	cout << "count = " << list.getCount() << "\n";
	system("pause");
	return 0;
}
#include"Tree.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color B0");
	srand(time(0));

	Tree tree;

	//Заполнение дерева
	tree.insert(100);
	tree.insert(50);
	tree.insert(90);
	tree.insert(88);
	tree.insert(11);
	tree.insert(7);
	tree.insert(-10);
	tree.insert(13);
	tree.insert(222);
	tree.insert(136);
	tree.insert(356);

	Leaf* min = tree.minimum();
	Leaf* max = tree.maximum();

	cout << "Min element = " << min->value << "\n";
	cout << "Max element = " << max->value << "\n";

	tree.print(tree.getRoot());

	Leaf* srch = tree.search(tree.getRoot(), 11);

	if (srch)
	{
		//cout << "Search = " << srch->value << "\n";
		cout << "SRCH: " << "\n";
		tree.print(srch);
	}
	else
	{
		cout << "Not found!!!" << "\n";
	}

	system("pause");
	return 0;
}
#include "Stack.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color B0");

	Stack stack;
	Stack stack2;

	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);

	cout << "---------\n";
	cout << "Stack = \n";
	stack.Show();

	
	while (stack.getCount() > 0)
	{
		stack2.push(stack.pop());
		//stack.Show();
	}

	cout << "---------\n";
	cout << "Stack2 = \n";
	stack2.Show();

	//system("pause");
	return 0;
}
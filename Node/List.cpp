#include "List.h"

List::List()
{
	head = tail = nullptr;
	count = 0;
}

List::~List()
{
	cout << "Сработка деструктора List \n";
	Sleep(1000);
	clear();
}

void List::addToTail(int value)
{
	// новый узел
	Node* node = new Node;
	node->value = value;
	//список пуст (добавление первого элемента)
	if (isEmpty())
	{
		head = tail = node;
	}
	else
	{
		// список не пуст
		tail->next = node;
		tail = node;
	}
	count++;
}

void List::addToHead(int value)
{
	// новый узел
	Node* node = new Node;
	node->value = value;
	//список пуст (добавление первого элемента)
	if (isEmpty())
	{
		head = tail = node;
	}
	else
	{
		node->next = head;
		head = node;
	}
	count++;
}

void List::removeFromTail()
{
	// список не пуст
	if (!isEmpty())
	{
		// временный указатель для прохода по списку
		Node* tmp = head;
		// перебор списка
		while (tmp->next != nullptr && tmp->next != tail)
		{
			tmp = tmp->next;
		}
		if (count == 1)
		{
			delete tmp;
			head = tail = nullptr;
		}
		else 
		{
			delete tmp->next; // delete tail (тоже самое)
			tail = tmp;
			tail->next = nullptr;
		}
		count--;
	}
}

void List::removeFromHead()
{
	// список не пуст
	if (!isEmpty())
	{
		Node* tmp = head->next;
		delete head;
		head = tmp;
		count--;
	}
}

void List::removeAt(int index)
{
	// список не пуст и индекс не выходит за предел списка
	if (!isEmpty() && index < count-1)
	{
		// временный указатель для прохода по списку
		Node * tmp = head;
		
		for (int idx = 0; idx < index - 1; idx++)
		{
			tmp = tmp->next;
		}
		// правая часть списка
		Node* right = tmp->next->next;
		delete tmp->next;
		tmp->next = right;
		count--;
	}
}

void List::insert(int value,int index)
{
	// Новый узел
	Node* node = new Node;
	node->value = value;
	// список не пуст и индекс не выходит за предел списка
	if (!isEmpty() && index < count - 1)
	{
		// временный указатель для прохода по списку
		Node* tmp = head;
		for (int idx = 0; idx < index - 2; idx++)
		{
			tmp = tmp->next;
		}
		int a = 0;
		// правая часть списка
		Node* right = tmp->next;
		tmp->next = node;
		node->next = right;
	}
}

bool List::isEmpty()
{
	return head == nullptr;
}

void List::print()
{
	// временный указатель для прохода по списку
	Node* tmp = head;
	if (!isEmpty())
	{
		while (tmp != nullptr)
		{
			cout << tmp->value << " ";
			tmp = tmp->next;
		}
		cout << endl;
	}
}

int List::getCount()
{
	return count;
}

void List::clear()
{
	if (!isEmpty())
	{
		// временный указатель для прохода по списку
		Node* tmp = head;
		/*while (tmp != nullptr)
		{
			tmp = tmp->next;
			delete head;
			head = tmp;
		}
		head = tail = nullptr;*/
		while (!isEmpty())
		{
			removeFromHead();
		}
		head = tail = nullptr;
	}

}

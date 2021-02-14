#include "LincedList.h"

LinkedList::LinkedList()
{
	head = tail = nullptr;
	count = 0;
}

LinkedList::~LinkedList()
{
	cout << "Сработка деструктора LinkedList\n";
	clear();
}

void LinkedList::addToTail(int value)
{
	// новый узел
	Node* node = new Node;
	node->value = value;

	// список пуст
	if (isEmpty())
	{
		head = tail = node;
	}
	else	// список не пуст
	{
		tail->next = node;
		node->prev = tail;
		tail = node;
	}
	count++;
}

void LinkedList::addToHead(int value)
{
	// новый узел
	Node* node = new Node;
	node->value = value;

	// список пуст
	if (isEmpty())
	{
		head = tail = node;
	}
	else	// список не пуст
	{
		node->next = head;
		head->prev = node;
		head = node;
	}
	count++;
}

void LinkedList::removeFromTail()
{
	// список не пуст
	if (!isEmpty())
	{
		Node* tmp = tail->prev;
		delete tail;
		tail = tmp;
		// 
		if (tail != nullptr)
		{
			tail->next = nullptr;
		}
		count--;
	}
}

void LinkedList::removeFromHead()
{
	// список не пуст
	if (!isEmpty())
	{
		Node* tmp = head->next;
		delete head;
		head = tmp;

		if (head != nullptr)
		{
			head->prev = nullptr;
		}
		count--;
	}
}

void LinkedList::removeAt(int index)
{
}

void LinkedList::insert(int value,int index)
{
	//Новый узел
	Node* node = new Node;
	node->value = value;
	// список пуст
	if (isEmpty())
	{
		head = tail = node;
	}
	else	// список не пуст
	{
		Node* tmp = head;

		for (int idx = 0; idx < index-1; idx++)
		{
			tmp = tmp->next;
		}
		// правая часть списка
		Node* right = tmp->next;
		// связь нового узла с левой частью списка
		tmp->next = node;
		node->prev = tmp;
		// связь нового узла с правой частью списка
		node->next = right;
		right->prev = node;
	}
	count++;
}

bool LinkedList::isEmpty()
{
	return head == nullptr;
}

void LinkedList::print()
{
	// Список не пустой
	if (!isEmpty())
	{
		Node* tmp = head;

		while (tmp != nullptr)
		{
			cout << tmp->value << " ";
			tmp = tmp->next;
		}
		cout << endl;
		cout << "count = " << count << "\n";
	}	
}

int LinkedList::getCount()
{
	return count;
}

void LinkedList::clear()
{
	if (!isEmpty())
	{
		// временный указатель для прохода по списку
		/*Node* tmp = head;
		while (tmp != nullptr)
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

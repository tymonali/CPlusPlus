#include "LincedList.h"

LinkedList::LinkedList()
{
	head = tail = nullptr;
	count = 0;
}

LinkedList::~LinkedList()
{
	cout << "�������� ����������� LinkedList\n";
	clear();
}

void LinkedList::addToTail(int value)
{
	// ����� ����
	Node* node = new Node;
	node->value = value;

	// ������ ����
	if (isEmpty())
	{
		head = tail = node;
	}
	else	// ������ �� ����
	{
		tail->next = node;
		node->prev = tail;
		tail = node;
	}
	count++;
}

void LinkedList::addToHead(int value)
{
	// ����� ����
	Node* node = new Node;
	node->value = value;

	// ������ ����
	if (isEmpty())
	{
		head = tail = node;
	}
	else	// ������ �� ����
	{
		node->next = head;
		head->prev = node;
		head = node;
	}
	count++;
}

void LinkedList::removeFromTail()
{
	// ������ �� ����
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
	// ������ �� ����
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
	//����� ����
	Node* node = new Node;
	node->value = value;
	// ������ ����
	if (isEmpty())
	{
		head = tail = node;
	}
	else	// ������ �� ����
	{
		Node* tmp = head;

		for (int idx = 0; idx < index-1; idx++)
		{
			tmp = tmp->next;
		}
		// ������ ����� ������
		Node* right = tmp->next;
		// ����� ������ ���� � ����� ������ ������
		tmp->next = node;
		node->prev = tmp;
		// ����� ������ ���� � ������ ������ ������
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
	// ������ �� ������
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
		// ��������� ��������� ��� ������� �� ������
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

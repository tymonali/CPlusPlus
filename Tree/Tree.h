#pragma once
#include"Leaf.h"

class Tree
{
	Leaf* root;		//Корень дерева

public:
	// Конструктор
	Tree();
	// Деструктор
	~Tree();

	// Вывод дерева относительно переданного узла
	void print(Leaf* leaf);
	// Поиск минимального
	Leaf* minimum();
	// Поиск максимального
	Leaf* maximum();
	// Вставка нового узла
	void insert(int value);
	// Получение корня
	Leaf* getRoot();
	// Очистка дерева
	void clear(Leaf* leaf);
	//Поиск
	Leaf* search(const Leaf* leaf, int value);
	// Удаление узла
	void remove(Leaf* leaf);// Реализовать самим
};


#include "Tree.h"

Tree::Tree()
{
    root = nullptr;
}

Tree::~Tree()
{
    // Очистка дерева относительно корня
    clear(root);
}

void Tree::print(Leaf* leaf)
{
    // Узел существует
    if (leaf)
    {
        print(leaf->left);
        cout << leaf->value << "\n";
        print(leaf->right);
    }
}

Leaf* Tree::minimum()
{
    if (root == nullptr)
    {
        return nullptr;
    }
    // Узе для прохода по дереву
    Leaf* tmp = root;
    // Спускаемся по левой ветке в самый низ
    while (tmp->left != nullptr)
    {
        tmp = tmp->left;
    }
    return tmp;
}

Leaf* Tree::maximum()
{
    if (root == nullptr) 
    {
        return nullptr;
    }
    // Узе для прохода по дереву
    Leaf* tmp = root;
    // Спускаемся по левой ветке в самый низ
    while (tmp->right != nullptr)
    {
        tmp = tmp->right;
    }
    return tmp;
}

void Tree::insert(int value)
{
    // Новый узел
    Leaf* newLeaf = new Leaf(value);
    // Временный указатель для прохода по дереву
    Leaf* tmp = root;
    // указатель на будующего родителя
    Leaf* futureparent = nullptr;

    // Дерево пустое
    if (root == nullptr)
    {
        root = newLeaf;
    }
    else
    {
        // Поиск места вставки
        while (tmp != nullptr)
        {
            // запоминаем родителя
            futureparent = tmp;
            // проход влево
            if (value < tmp->value)
            {
                tmp = tmp->left;
            }
            // проход вправо
            else
            {
                tmp = tmp->right;
            }
        }
        // Запоминаем родителя
        newLeaf->parent = futureparent;
        // Прикрепление к родителю
        if (value < futureparent->value)
        {
            futureparent->left = newLeaf;
        }
        //Проход вправо
        else
        {
            futureparent->right = newLeaf;
        }
    }
}

Leaf* Tree::getRoot()
{
    return root;
}

void Tree::clear(Leaf* leaf)
{
    if (leaf)
    {
        clear(leaf->left);
        clear(leaf->right);
        cout << "Delete - " << leaf->value << "\n";
        delete leaf;
    }
}

Leaf* Tree::search(const Leaf* leaf, int value)
{
    // Временный узел для прохода
    Leaf* tmp = const_cast<Leaf*>(leaf);
    while (tmp != nullptr)
    {
        if (value == tmp->value)
        {
            break;
        }
        else if (value < tmp->value)
        {
            tmp = tmp->left;
        }
        else
        {
            tmp = tmp->right;
        }
    }
    return tmp;
}

void Tree::remove(Leaf* leaf)
{

}

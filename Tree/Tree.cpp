#include "Tree.h"

Tree::Tree()
{
    root = nullptr;
}

Tree::~Tree()
{
    // ������� ������ ������������ �����
    clear(root);
}

void Tree::print(Leaf* leaf)
{
    // ���� ����������
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
    // ��� ��� ������� �� ������
    Leaf* tmp = root;
    // ���������� �� ����� ����� � ����� ���
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
    // ��� ��� ������� �� ������
    Leaf* tmp = root;
    // ���������� �� ����� ����� � ����� ���
    while (tmp->right != nullptr)
    {
        tmp = tmp->right;
    }
    return tmp;
}

void Tree::insert(int value)
{
    // ����� ����
    Leaf* newLeaf = new Leaf(value);
    // ��������� ��������� ��� ������� �� ������
    Leaf* tmp = root;
    // ��������� �� ��������� ��������
    Leaf* futureparent = nullptr;

    // ������ ������
    if (root == nullptr)
    {
        root = newLeaf;
    }
    else
    {
        // ����� ����� �������
        while (tmp != nullptr)
        {
            // ���������� ��������
            futureparent = tmp;
            // ������ �����
            if (value < tmp->value)
            {
                tmp = tmp->left;
            }
            // ������ ������
            else
            {
                tmp = tmp->right;
            }
        }
        // ���������� ��������
        newLeaf->parent = futureparent;
        // ������������ � ��������
        if (value < futureparent->value)
        {
            futureparent->left = newLeaf;
        }
        //������ ������
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
    // ��������� ���� ��� �������
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

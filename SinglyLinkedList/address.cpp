#include "address.h"

void address::addAddress()
{
    cout << "������� ��� ��������:\n";
    cin.getline(name, 40);
    cout << "������� ����� ����������:\n";
    cin.getline(street, 40);
    cout << "������� ����� ����������:\n";
    cin.getline(city, 20);
    cout << "������� ����� �����:\n";
    cin.getline(state, 3);
    cout << "������:\n";
    cin.getline(zip, 11);
}
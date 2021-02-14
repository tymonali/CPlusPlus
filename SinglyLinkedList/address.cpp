#include "address.h"

void address::addAddress()
{
    cout << "¬ведите им€ абонента:\n";
    cin.getline(name, 40);
    cout << "¬ведите улицу проживани€:\n";
    cin.getline(street, 40);
    cout << "¬ведите город проживани€:\n";
    cin.getline(city, 20);
    cout << "¬ведите номер штата:\n";
    cin.getline(state, 3);
    cout << "»ндекс:\n";
    cin.getline(zip, 11);
}
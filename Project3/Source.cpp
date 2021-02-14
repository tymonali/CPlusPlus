#include <iostream>
#include <Windows.h>
using namespace std;

class Person
{
	char firstName[30];
	char lastName[30];
	int age;
public:
	// Объявление статической переменной (Должна инициализироваться за пределами класса)
	static int counter;
	Person()
	{
		firstName[30] = NULL;
		lastName[30] = NULL;
		age = 0;
	}
	Person(const char* firstName,const char* lastName, int age)
	{
		strcpy_s(this->firstName, firstName);
		strcpy_s(this->lastName, lastName);
		this->age = age;
	}
	Person(const Person& copy)
	{
		age = copy.age;
		if (!copy.firstName && ! copy.lastName)
		{
			firstName[30] = NULL;
			lastName[30] = NULL;
		}
		else
		{
			strcpy_s(firstName, copy.firstName);
			strcpy_s(lastName, copy.lastName);
		}
	}
};

class Math
{
public:
	// Статические методы(функции) класса
	static int sum(int a, int b)
	{
		return a + b;
	}
	static int dif(int a, int b)
	{
		return a - b;
	}
};

class filehelper
{
public:
	static void write(char* filename, char* content)
	{
		// Логика сохранения данных в файл
		cout << "Данные успешно сохранены в файл \"" << filename << "\"" << "\n";
		cout << "File info: " << content << "\n";
	}
	static char* read(char* filename)
	{
		cout << "Данные успешно считаны" << "\n";
		char buf[100] = "Какие-то данные из файла...";
		return buf;
	}
};

class ConsoleWriter
{
public:
	static void write(char* str)
	{
		for (int i = 0; i < strlen(str); i++)
		{
			cout << str[i];
			Sleep(100);
		}
		cout << "\n";
	}
	static void write(int arr[3][3])
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << arr[i][j] << "  ";
				Sleep(100);
			}
			cout << "\n";
		}
	}
};

// Инициализация статической переменной
int Person::counter = 0;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Person p1("Vasya", "Pupkin", 20);
	Person p2("Petya", "Ivanov", 25);
	cout << "Counter = " << Person::counter << "\n";
	// Доступ к статическому методу происходит через идентификатор класса
	// а не через объявленную переменную класса
	cout << Math::sum(20, 10) << "\n";
	char run[20] = "data.txt";
	char read[45] = "Data is not valid!!!";
	filehelper::write(run,read);

	char str[] = "Hello World!!!";
	ConsoleWriter::write(str);

	int arr[3][3] = { {1,2,3},
					  {4,5,6},
					  {7,8,9} };
	ConsoleWriter::write(arr);
	return 0;
}
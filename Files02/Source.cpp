#include<iostream>
#include<Windows.h>

using namespace std;

class PassportInfo
{
	char series[5];
	int number;
public:
	PassportInfo()
	{
		series[0] = '\0';
		number = 0;
	}
	PassportInfo(const char* series, int number)
	{

	}
};

class Person
{
	char firstName[30];
	char lastName[30];
	int age;
public:
	Person()
	{
		firstName[0] = lastName[0] = '\0';
		age = 0;
	}
	Person(const char* firstName, const char* lastName, int age)
	{
		this->age = age;
		strcpy_s(this->firstName, firstName);
		strcpy_s(this->lastName, lastName);
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color B0");
	// -= ���������� �������� � ���� =-
	//Person p("FirstName 1", "LastName 2", 38);

	//FILE* f;

	//// �������� �����
	//fopen_s(&f,"Person.bin","wb");	// "wb" - wrighte binary
	//// ���� ���� ������
	//if (f)
	//{
	//	// ������ ������� � ����
	//	fwrite(&p, sizeof(Person), 1, f);
	//	cout << "Succes" << endl;
	//	// �������� �����
	//	fclose(f);
	//}

	// ���������� ���, ��� ���� � ������� �� ����� ����

	Person p;

	FILE* f;
	// �������� �����
	fopen_s(&f, "Person.bin", "rb");
	// ���� ���� ������
	if (f)
	{
		// ������ ������� �� �����
		fread(&p, sizeof(Person), 1, f);
		cout << "Succes" << endl;
		fclose(f);
	}

	return 0;
}
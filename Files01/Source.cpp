#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
//���������, ��������
//���������� � ��������
struct Man {
	//���
	char str[255];
	//�������
	int age;
};
void main()
{
	//�������� �������� ���������
	Man A, B;
	//������ � ������ A
	//����������, ���������� � ����������
	cout << "\nEnter name:\n";
	cin >> A.str;
	cout << "\nEnter age:\n";
	cin >> A.age;
	//�������� ����� �� ������
	FILE* f = fopen("Test.txt", "w+");
	if (!f) exit(0);
	//������ ������� � � ����
	fwrite(&A, sizeof(Man), 1, f);
	
		fclose(f);
	//�������� ����� �� ������
	f = fopen("Test.txt", "r+");
	if (!f) exit(0);
	//���������� ����������� �����
	//� ������ B
	fread(&B, sizeof(Man), 1, f);
	//�������� ����� �� ������
	fclose(f);
	//����� ���������� �� �����
	cout << "\nName � " << B.str << "\n\nAge � " << B.age << "\n\n";
}
#include<iostream>
#include<stdio.h>
#include<io.h>	// ���������� ��� ������ ������

using namespace std;

int main()
{
	_finddata_t* info = new _finddata_t;
	// ����� ����������
	// *.* - ��� �����
	// ����� ����������
	long findHandle = _findfirst("C:\\*.*",info);
	// ��������� ���������� ��� ������� �� �����������
	long tmpHandle = findHandle;

	while (tmpHandle != -1)
	{
		cout << info->name << " " << info->size/102400 << endl;
		// ������� � ���������� �����
		tmpHandle = _findnext(findHandle, info);
	}

	delete info;
	// �������� �����������
	_findclose(findHandle);

	return 0;
}
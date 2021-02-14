#define _CRT_SECURE_NO_WARNINGS		// �� �������� �������� �� ������������� ������ �������
									// ������ ���� ������� � ����� ������ �����
#include <iostream>
#include <Windows.h>
#include <io.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color B0");
	srand(time(0));

	/*
		���������� ����� - ���������� �����, ������� ������������� ������������
		�������� �� ����� �������� �����.
		�������� ��������� - ����������, ��������� �� �������� ����.
		�������� �����-�� ���������� �� �������� ����� (������, ������� � 
		����� � �.�.)
	*/

	// �������� ���������
	FILE* f;
	/*
		mode:
			r - ������ (���� ����� ���, �� ������)
			w - ������ (���� ����� ���, �� �� ���������)
			a - ���������� � ����� (���� ����� ���, �� �� ���������)
			r+ - ������ + ������ (���� ������ ������������)
			w+ - ������ + ������ (����� ������ ����� ���� � ������, ���� ��� ���)
			a+ - ���������� + ������ (����� ������ ����� ���� � ������, ���� ��� ���)
	*/
	fopen_s(&f, "demo.txt", "w");
	if (f)
	{
		// ��������� ����������� �����:
		int handle = _fileno(f);
		cout << "���������� = " << handle << "\n";
		
		// �������� �� ������������� �����
		int res = _access("demo.txt", 0);
		if (res == 0)
		{
			cout << "���� ����������!!!\n";
		}
		else
		{
			cout << "���� �� ������\n";
		}
		/*
			fputc - ������ ������� �� �����
			fgetc - ������ ������� � ����
			fgets - ������ ������ �� ����� 
			fputs - ������ ������ � ����
			fread - 
			fwrite
			feof - �������� �� ����� �����
			_fileno - ��������� �������� ���������� �����
			fseek - ��������� �������
			+++++++++++++++++++++++++++++++++++++++++++++++
			_access - �������� ������ �������
				0	������������� �����
				1	������������� �����
				2	����������� ��� ������
				3	����������� ��� ������
				4	����������� ��� ������/������
				 ������� _access() ���������� 0, 
				 ���� ����������� ��� ������� ��������;
				 � ��������� ������ ��� ���������� �1.
			+++++++++++++++++++++++++++++++++++++++++++++++
			_filelength - ������ ����� � ������
			_loking - ���������� ������������ ����
		*/

		// ������ ������� � ����
		fputc('A', f);
		fputc('B', f);
		fputc('C', f);

		char buf[] = "\nHello World!!!\r\n";

		fputs(buf, f);

		// ��������� ������� �����
		long size = _filelength(handle);
		cout << "Filesize = " << size << " byte\n";

		// �������� �����
		fclose(f);
	}
	/*fopen_s(&f, "demo.txt", "r");
	if (f)
	{
		char buff[100];
		while (!feof(f))
		{
			fgets(buff, 100, f);
		}
		cout << buff << "\n";
		fclose(f);
	}*/
	
	
	// ������:
	/*
			������ � ����� https://en.cppreference.com/w/c/io/fopen
	

		FILE* fp = fopen("test.txt", "w");
		if (!fp) {
			perror("File opening failed");
			return EXIT_FAILURE;
		}

		int c; // note: int, not char, required to handle EOF
		while ((c = fgetc(fp)) != EOF) { // standard C I/O file reading loop
			putchar(c);
		}

		if (ferror(fp))
			puts("I/O error when reading");
		else if (feof(fp))
			puts("End of file reached successfully");

		fclose(fp);
	*/  
	system("pause");
	return 0;
}
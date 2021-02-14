#define _CRT_SECURE_NO_WARNINGS		// Не обращать внимания на использование старых функций
									// Должно быть указано в самом начале файла
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
		Дескриптор файла - уникальный номер, который присваивается операционной
		системой во время открытия файла.
		Файловый указатель - переменная, ссылается на открытый файл.
		Содержит какую-то информацию об открытом файле (размер, позиция в 
		файле и т.п.)
	*/

	// Файловый указатель
	FILE* f;
	/*
		mode:
			r - чтение (если файла нет, то ошибка)
			w - запись (если файла нет, то он создается)
			a - добавление в конец (если файла нет, то он создается)
			r+ - чтение + запись (файл должен существовать)
			w+ - чтение + запись (будет создан новый файл в случае, если его нет)
			a+ - добавление + чтение (будет создан новый файл в случае, если его нет)
	*/
	fopen_s(&f, "demo.txt", "w");
	if (f)
	{
		// получение дескриптора файла:
		int handle = _fileno(f);
		cout << "Дескриптор = " << handle << "\n";
		
		// проверка на существование файла
		int res = _access("demo.txt", 0);
		if (res == 0)
		{
			cout << "Файл существует!!!\n";
		}
		else
		{
			cout << "Файл не создан\n";
		}
		/*
			fputc - чтение символа из файла
			fgetc - запись символа в файл
			fgets - чтение строки из файла 
			fputs - запись строки в файл
			fread - 
			fwrite
			feof - проверка на конец файла
			_fileno - позволяет получить дескриптор файла
			fseek - изменение позиции
			+++++++++++++++++++++++++++++++++++++++++++++++
			_access - проверка уровня доступа
				0	Существование файла
				1	Исполняемость файла
				2	Доступность для записи
				3	Доступность для чтения
				4	Доступность для чтения/записи
				 Функция _access() возвращает 0, 
				 если проверяемый вид доступа разрешен;
				 в противном случае она возвращает —1.
			+++++++++++++++++++++++++++++++++++++++++++++++
			_filelength - размер файла в байтах
			_loking - блокировка определенных байт
		*/

		// запись символа в файл
		fputc('A', f);
		fputc('B', f);
		fputc('C', f);

		char buf[] = "\nHello World!!!\r\n";

		fputs(buf, f);

		// получение размера файла
		long size = _filelength(handle);
		cout << "Filesize = " << size << " byte\n";

		// закрытие файла
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
	
	
	// Пример:
	/*
			Пример с сайта https://en.cppreference.com/w/c/io/fopen
	

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
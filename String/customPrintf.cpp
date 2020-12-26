#include "customPrintf.h"

bool customPrintf::isAvailableFormat(char symb)
{
	const char availableFormats[] = { 'd', 's', 'f' ,'\0'};

	for (int i = 0; i < strlen(availableFormats); i++) 
	{
		if (availableFormats[i] == symb) {
			return true;
		}
	}
    return false;
}

void customPrintf::custom_Printf(const char* format, ...)
{
	va_list list;
	va_start(list, format);		//открываем указатель

	for (char* tmp = (char*)format; *tmp; tmp++) 
	{
		//cout << tmp << endl;
		if (*tmp == '%') 
		{
			//переход к следующему символу
			tmp++;
			//формат доступен
			if (isAvailableFormat(*tmp)) 
			{

				switch (*tmp) 
				{
					case 's': 
					{
						cout << va_arg(list, char*);
						break;
					}
					case 'f': 
					{
						cout << "/";
						break;
					}
					case 'd': 
					{
						cout << ":";
						break;
					}

				}
			}
			else 
			{
				cout << *(tmp - 1) << *tmp;
			}
		}
		else 
		{
			cout << *tmp;
		}

	}
	va_end(list);		//закрываем указатель
}

#include<iostream>

void bubble(char* items, int count);

/* Шейкер-сортировка. */
void shaker(char* items, int count);

int main(void)
{
    setlocale(LC_ALL, "");
	char s[255];

	printf("Введите строку:");
	gets_s(s);
	//bubble(s, strlen(s));
    shaker(s, strlen(s));
	printf("Отсортированная строка: %s.\n", s);

	return 0;
}
void bubble(char* items, int count)
{
    register int a, b;
    register char t;

    for (a = 1; a < count; ++a)
        for (b = count - 1; b >= a; --b) {
            if (items[b - 1] > items[b]) {
                /* exchange elements */
                t = items[b - 1];
                items[b - 1] = items[b];
                items[b] = t;
            }
        }
}
/* Шейкер-сортировка. */
void shaker(char* items, int count)
{
    register int a;
    int exchange;
    char t;

    do {
        exchange = 0;
        for (a = count - 1; a > 0; --a) {
            if (items[a - 1] > items[a]) {
                t = items[a - 1];
                items[a - 1] = items[a];
                items[a] = t;
                exchange = 1;
            }
        }

        for (a = 1; a < count; ++a) {
            if (items[a - 1] > items[a]) {
                t = items[a - 1];
                items[a - 1] = items[a];
                items[a] = t;
                exchange = 1;
            }
        }
    } while (exchange); /* сортировать до тех пор, пока не будет обменов */
}
#include "Application.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color B0");
	ColorConfig::setColor(ColorConfig::White);

	Application app;
	app.start();

	return 0;
}
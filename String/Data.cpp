#pragma once
#include "Data.h"

void Application::menu()
{
	cout << "[1] Старт" << endl;
	cout << "[0] Выход" << endl;
}

bool Application::runAction(int action)
{
	switch (action) 
	{
	case 0:
		return false;
		break;
	case 1:
		Game();
		cout << endl;
		system("pause");
		break;
	}

	return true;
}

void Application::start()
{
	int action;
	while (true) {
		system("cls");

		menu();
		cin >> action;
		if (!runAction(action))
		{
			break;
		}
	}
}

customPrintf Application::Game()
{
	customPrintf d;
	d.custom_Printf("C%d%f%s%f%s%f%s%f%s", "Program Files", "Adobe", "bin", "adobe.exe");
	return d;
}

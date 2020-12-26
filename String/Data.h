#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include"customPrintf.h"

using namespace std;

class Application
{
	int a, b;

	void menu();
	bool runAction(int action);

public:
	void start();
	customPrintf Game();
};
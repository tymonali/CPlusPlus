#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "Hello World!!!";
	string str2 = " !!!";
	string str3 = str + str2;
	str3 += " )))";
	cout << str3 << endl;

	char buff[50];
	strcpy_s(buff, str3.c_str());
	cout << buff << endl;
}
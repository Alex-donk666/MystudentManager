#include<iostream>
#include "menu.h"
using namespace std;


int main()
{
	while (true) {

		system("cls");
		int select = menu();
		switch ((MenuOptions)select) {
		case Cin:
			break;
		case Print:
			break;
		case Save:
			break;
		case Read:
			break;
		case Statistic:
			break;
		case Find:
			break;
		case Alter:
			break;
		case Delete:
			break;
		case Quit:
			break;
		}

		system("pause");

	}

	return 0;
}
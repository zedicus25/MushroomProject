#include <iostream>
#include "c_Mushroom_Plantation.h"
using namespace std;
int main()
{
	srand((time(0)));
	c_Mushroom_Plantation plantation;
	int size_plantation;
	int user_input = -1;
	int id = 0;
	do
	{
		system("cls");
		cout << "1 - Set plantation size" << endl;
		cout << "2 - Create plantation" << endl;
		cout << "3 - Delete plantation" << endl;
		cout << "4 - Plant mushroom" << endl;
		cout << "5 - Grow mushroom(one)" << endl;
		cout << "6 - Grow mushrooms(all possibles)" << endl;
		cout << "7 - Pick mushroom(one)" << endl;
		cout << "8 - Pick mushrooms(all possibles)" << endl;
		cout << "9 - Print plantation info" << endl;
		cout << "0 - Exit" << endl;
		cin >> user_input;
		switch (user_input)
		{
		case 1:
			system("cls");
			cout << "Enter size plantation ";
			cin >> size_plantation;
			plantation.setMaxCountMushrooms(size_plantation);
			break;
		case 2:
			system("cls");
			plantation.createPlantation();
			system("pause");
			break;
		case 3:
			system("cls");
			plantation.deletePlantation();
			system("pause");
			break;
		case 4:
			system("cls");
			cout << "Enter position for plant" << endl;
			cin >> id;
			plantation.plantMushroom(id);
			system("pause");
			break;
		case 5:
			system("cls");
			cout << "Enter position for grow" << endl;
			cin >> id;
			plantation.growMushroom(id);
			system("pause");
			break;
		case 6:
			system("cls");
			plantation.growMushrooms();
			system("pause");
			break;
		case 7:
			system("cls");
			cout << "Enter position for pick" << endl;
			cin >> id;
			plantation.pickMushroom(id);
			system("pause");
			break;
		case 8:
			system("cls");
			plantation.pickMushrooms();
			system("pause");
			break;
		case 9:
			system("cls");
			plantation.printPlantationInfo();
			system("pause");
			break;
		case 0:
			break;
		default:
			cout << "Incorrect enter" << endl;
			break;
		}
	} while (user_input != 0);
}
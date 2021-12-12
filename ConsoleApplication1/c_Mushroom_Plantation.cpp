#include "c_Mushroom_Plantation.h"
#include <iostream>
c_Mushroom_Plantation::c_Mushroom_Plantation()
{
	this->mushrooms = nullptr;
	this->max_count_mushrooms = 0;
}

void c_Mushroom_Plantation::createPlantation()
{
	this->mushrooms = (c_Mushroom*)malloc(this->max_count_mushrooms * sizeof(c_Mushroom));
	for (int i = 0; i < this->max_count_mushrooms; i++)
	{
		mushrooms[i].setDefault();
	}
	std::cout << "Plantation created!\n";
}

void c_Mushroom_Plantation::deletePlantation()
{
	if (this->mushrooms != nullptr) {
		free(mushrooms);
		std::cout << "Plantation deleted\n";
	}
}

void c_Mushroom_Plantation::plantMushroom(int id)
{
	if (this->mushrooms != nullptr)
	{
		if (id < this->max_count_mushrooms && id >= 0) {
			char name[30];
			bool edible;
			int time_to_full_grow;
			int grow_delay = 1 + rand() % 9;
			int grow_step = 1 + rand() % 5;
			std::cin.ignore();
			std::cout << "Enter name ";
			gets_s(name);
			std::cout << "Enter edible ";
			std::cin >> edible;
			std::cout << "Enter time to full grow ";
			std::cin >> time_to_full_grow;
			this->mushrooms[id].setMushroom(name,0,edible,time_to_full_grow,0,grow_step,grow_delay*10);

		}
		else {
			std::cout << "Outside the plantation\n" << std::endl;
		}
	}
	else
	{
		std::cout << "plantation not created\n";
	}
}

void c_Mushroom_Plantation::pickMushrooms()
{
	if (this->mushrooms != nullptr) {
		for (int i = 0; i < this->max_count_mushrooms; i++)
		{
			if (this->mushrooms[i].hasGrown() && strcmp(this->mushrooms[i].getName(), "default")!= 0) {
				std::cout << "Mushroom pick up\n";
				this->mushrooms[i].setDefault();
			}
			else if(strcmp(this->mushrooms[i].getName(), "default") != 0) {
				std::cout << "Mushroom not grow\n";
			}
		}
	}
	else {
		std::cout << "Plantation not created\n";
	}
}

void c_Mushroom_Plantation::pickMushroom(int id)
{
	if (this->mushrooms != nullptr)
	{
		if (id < this->max_count_mushrooms && id >= 0) {
			if (this->mushrooms[id].hasGrown()) {
				std::cout << "Mushroom pick up\n";
				this->mushrooms[id].setDefault();
			}
		}
		else {
			std::cout << "Outside the plantation\n" << std::endl;
		}
	}
	else{
		std::cout << "plantation not created\n";
	}
}

void c_Mushroom_Plantation::printPlantationInfo()
{
	if (this->mushrooms != nullptr) {
		std::cout << "Name" << " " << "Weight" << " " << "Edible\n";
		for (int i = 0; i < this->max_count_mushrooms; i++)
		{
			if (strcmp(this->mushrooms[i].getName(),"default")==0)
				continue;
			else
				this->mushrooms[i].print();
		}
	}
}

void c_Mushroom_Plantation::growMushrooms()
{
	if (this->mushrooms != nullptr) {
		for (int i = 0; i < this->max_count_mushrooms; i++)
		{
			if (!this->mushrooms[i].hasGrown()) {
				std::cout << "Mushroom start grow\n";
				this->mushrooms[i].grow();
			}
			else {
				continue;
			}
		}
	}
	else {
		std::cout << "Plantation not created\n";
	}
}

void c_Mushroom_Plantation::growMushroom(int id)
{
	if (this->mushrooms != nullptr)
	{
		if (id < this->max_count_mushrooms && id >= 0) {
			if (!this->mushrooms[id].hasGrown()) {
				std::cout << "Mushroom start grow\n";
				this->mushrooms[id].grow();
			}
			else {
				std::cout << "Mushroom has grown\n";
			}
		}
		else {
			std::cout << "Outside the plantation\n" << std::endl;
		}
	}
	else {
		std::cout << "plantation not created\n";
	}
}

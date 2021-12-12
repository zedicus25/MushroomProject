#include "c_Mushroom.h"
#include <Windows.h>
#include <iostream>
c_Mushroom::c_Mushroom()
{
	this->name = nullptr;
	this->weight = 0;
	this->edible = true;
	this->time_to_full_growth = 0;
	this->current_time = 0;
	this->grow_step = 0;
	this->grow_delay = 0;
}

c_Mushroom::c_Mushroom(const char* name, float weight, bool edible, int time_to_full_growth, int current_time, int grow_step, int grow_delay)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->weight = weight;
	this->edible = edible;
	this->time_to_full_growth = time_to_full_growth;
	this->current_time = current_time;
	this->grow_step = grow_step;
	this->grow_delay = grow_delay;
}

void c_Mushroom::setName(const char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

void c_Mushroom::grow()
{
	if (!this->hasGrown()) {
		this->current_time += this->grow_step;
		this->weight += 0.2;
		Sleep(this->grow_delay);
		this->grow();
	}
	else {
		std::cout << "Mushroom has grown\n";
	}
}

void c_Mushroom::print()
{
	std::cout << this->name<< " " << this->weight<< " " << this->edible<< std::endl;
}

void c_Mushroom::setMushroom(const char* name, float weight, bool edible, int time_to_full_growth, int current_time, int grow_step, int grow_delay)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->weight = weight;
	this->edible = edible;
	this->time_to_full_growth = time_to_full_growth;
	this->current_time = current_time;
	this->grow_step = grow_step;
	this->grow_delay = grow_delay;
}

void c_Mushroom::setDefault()
{
	this->name = new char[strlen("default") + 1];
	strcpy_s(this->name, strlen("default") + 1, "default");
	this->weight = 0;
	this->edible = 1;
	this->time_to_full_growth = 0;
	this->current_time = 0;
	this->grow_step = 0;
	this->grow_delay = 0;
}

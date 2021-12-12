#pragma once
#include "c_Mushroom.h"
class c_Mushroom_Plantation
{
private:
	c_Mushroom* mushrooms;
	int max_count_mushrooms;
public:
	c_Mushroom_Plantation();
	
	//sets
	inline void setMaxCountMushrooms(int max_count_mushrooms) {
		this->max_count_mushrooms = max_count_mushrooms;
	}

	//gets
	inline int getMaxCountMushrooms() const {
		return this->max_count_mushrooms;
	}

	void createPlantation();
	void deletePlantation();
	void plantMushroom(int id);
	void pickMushrooms();
	void pickMushroom(int id);
	void growMushrooms();
	void growMushroom(int id);
	void printPlantationInfo();

	~c_Mushroom_Plantation()
	{
		delete[] mushrooms;
	}
};


#pragma once
#include "c_Mushroom.h"
class c_Mushroom_Plantation
{
private:
	int size;
	c_Mushroom* mushrooms;
	int count_mushrooms;
	int max_count_mushrooms;
public:
	c_Mushroom_Plantation();
	
	//sets
	inline void setSize(int size) {
		this->size = size;
	}
	inline void setMaxCountMushrooms(int max_count_mushrooms) {
		this->max_count_mushrooms = max_count_mushrooms;
	}

	//gets
	inline int getSize() const {
		return this->size;
	}
	inline int getCountMushrooms() const {
		return this->count_mushrooms;
	}
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

	
	
};


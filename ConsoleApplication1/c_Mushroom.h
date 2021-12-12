#pragma once
class c_Mushroom
{
private:
	char* name;
	float weight;
	bool edible;
	int time_to_full_growth;
	int current_time;
	int grow_step;
	int grow_delay;
public:
	c_Mushroom();
	c_Mushroom(const char* name, float weight, bool edible, int time_to_full_growth, int current_time, int grow_step, int grow_delay);

	//gets
	inline char* getName() const {
		return this->name;
	}
	inline float getWeight() const {
		return this->weight;
	}
	inline bool getEdible() const{
		return this->edible;
	}
	inline int getTimeToFullGrowth() const{
		return this->time_to_full_growth;
	}
	inline int getCurrentTime() const {
		return this->current_time;
	}
	inline int getGrowStep() const {
		return this->grow_step;
	}

	//sets
	void setName(const char* name);
	inline void setWeight(float weight) {
		this->weight = weight<=0 ? 1 : weight;
	}
	inline void setEdible(bool edible) {
		this->edible = edible;
	}
	inline void setTimeToFullGrowth(int time_to_full_growth) {
		this->time_to_full_growth = time_to_full_growth <= 0 ? 1:time_to_full_growth;
	}
	inline void setGrowStep(int grow_step) {
		this->grow_step = grow_step <= 0 ? 1 : grow_step;
	}

	void grow();
	void print();
	void setMushroom(const char* name, float weight, bool edible, int time_to_full_growth, int current_time, int grow_step, int grow_delay);
	void setDefault();
		

	inline bool hasGrown() const {
		return this->current_time >= this->time_to_full_growth;
	}

};


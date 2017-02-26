#include "Girl.h"
#include <string>
/*This class stores attributes of Girls*/
Girl::Girl (std::string name, int attractiveness,int budget,int intelligence,int criterion,std::string type) {

	this->name = name;
	this->attractiveness = attractiveness;
	this->budget = budget;	
	this->intelligence  = intelligence;
	this->criterion = criterion;
	this->status = false;
	this->type = type;

}

std::string Girl::getName() {
	
	return	this->name;
}

int Girl:: getAttractiveness() {
	
	return this->attractiveness;
}

int Girl:: getBudget() {

	return this->budget;
}
int Girl:: getIntelligence() {
	
	return this->intelligence;
}

int Girl:: getCriterion() {

	return this->criterion;
}

std::string Girl::getType() {

	return this->type;
}

bool Girl:: getStatus() {
	
	return this->status;
}

void Girl::setStatus(bool n) {
	if ( n == 1 )
	
	this->status = true;
	else 
	this->status =false;
}

std::string Girl:: getboyfriendName()  {

	bool check;
	check = getStatus();
	if (check == true) {
		return this->boyfriend_name;
	}else {
		return " ";
	}
}
std::string Girl:: getboyfriendType() {
	
	bool check;
	check = getStatus();
	if (check == true) {
		return this->boyfriend_type;
	}else {
		return " ";
	}
}
std:: string Girl:: setboyfriendName(std:: string boy_name) {
	
	this->boyfriend_name = boy_name;
}

std:: string Girl:: setboyfriendType(std:: string boy_type) {

	this->boyfriend_type = boy_type;
}

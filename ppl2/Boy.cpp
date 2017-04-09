#include "Boy.h"
#include <string>
#include <iostream>
using namespace std;


Boy::Boy (string name, int attractiveness,int budget,int intelligence,int criterion,string type) {

	this->name = name;
	this->attractiveness = attractiveness;
	this->budget = budget;	
	this->intelligence  = intelligence;
	this->criterion = criterion;
	this->status = false;
	this->type = type;
	

}

string Boy::getName() {
	
	return	this->name;
}

int Boy:: getAttractiveness() {
	
	return this->attractiveness;
}

int Boy:: getBudget() {

	return this->budget;
}
int Boy:: getIntelligence() {
	
	return this->intelligence;
}

int Boy:: getCriterion() {

	return this->criterion;
}

string Boy::getType() {

	return this->type;
}

bool Boy:: getStatus() {
	
	return this->status;
}

void Boy::setStatus(bool n) {
	if (n == 1)	
	this->status = true;
	else 
	this->status = false;
}

string Boy:: getgirlfriendName()  {

	bool check;
	check = getStatus();
	if (check == true) {
		return this->girlfriend_name;
	}else {
		return " ";
	}
}
string Boy:: getgirlfriendType() {
	
	bool check;
	check = getStatus();
	if (check == true) {
		return this->girlfriend_type;
	}else {
		return " ";
	}
}
string Boy:: setgirlfriendName(string girl_name) {
	
	this->girlfriend_name = girl_name;
}

string Boy:: setgirlfriendType(string girl_type) {

	this->girlfriend_type = girl_type;
}

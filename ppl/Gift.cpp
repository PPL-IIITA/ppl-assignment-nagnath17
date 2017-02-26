#include "Gift.h"
#include <string>
using namespace std;

Gift::Gift(string name, int type, int price, int value) {
	this->name   = name;
	this->type   = type;
	this->price  = price;
	this->value  = value;


}
int Gift:: getType(){
	return this->type;
}
int Gift:: getPrice(){
	return this->price;
}
int Gift:: getValue(){
	return this->price;
}


#ifndef GIFT_H
#define GIFT_H
#include <string>
#include <iostream>
using namespace std;
/*!<defines Type of Gift*/
class Gift {
	public:
		string name;
		int type;
		int price;
		int value;
		Gift(string name, int type, int price, int value);/*!<constructor*/
		int getType();
		int getPrice();
		int getValue();
};
#endif

#include "Test.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <time.h>
using namespace std;

int Test:: getRand() {

	value = rand()%100;
	return value;

}

/*!< Function Use to Generate random Input For Boys And Girls*/

void Test:: generate(int n,int m)  {

	srand(time(NULL));

	ofstream myfile;
	myfile.open("boytest.csv");

	for (int i = 0; i < n; i++) {

		name = "Boy"+to_string(i+1);
		budget = getRand();
		attractiveness = getRand();
		intelligence = getRand();

		myfile<<name<<" ; "<<attractiveness<<" ; "<<budget<<" ; "<<intelligence<<"\n";

	}
	myfile.close();

	srand(time(NULL));
	myfile.open("girltest.csv");

	for (int i = 0; i < m; i++) {

		name = "Girl" + to_string(i+1);
		attractiveness = getRand();
		budget = getRand();
		intelligence = getRand();

		myfile<<name<<" ; "<<attractiveness<<" ; "<<budget<<" ; "<<intelligence<<"\n";


	}
	myfile.close();

}
/*!<This Function Generates Gifts*/
void Test::generateGift() {
	srand(time(NULL));

	ofstream myfile;
	myfile.open("gifttest.csv");
	for (int i = 0; i < 5; i++) {

		price = rand()%50;
		value = rand()%50;
		int type = (rand()%250+1)%3;
		if (type == 0) name = "Essential";
		else if (type == 1)name == "Luxury";
		else name == "Utility";
		myfile<<name<<";"<<value<<";"<<price<<";"<<value<<"\n";

	}
	myfile.close();

}

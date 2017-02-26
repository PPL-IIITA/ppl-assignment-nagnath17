#include <iostream>
#include <vector>
#include <string.h>
#include <ctime>
#include <stdexcept>
#include "Log.h"
using namespace std;
/*!<generates Log file*/
Log::Log(string myfile) {
	if (this->file.is_open()) {
		this->file.close();
	}
	this->file.open(myfile,std::ios::out|std::ios::app);
}
void Log::logger(string str1,string str2) {

	time(&timer);
	this->str = ctime(&timer);
	this->str[this->str.size()-1] = '\0';
	this->file<<this->str<<' '<<str1<<' '<<str2<<endl;

}
Log::~Log() {

	if (this->file.is_open())
		this->file.close();
	cout<<"Log ends"<<endl;
}

#ifndef READ_H
#define READ_H

#include <string>
#include <sstream>
#include <vector>
#include "Boy.h"
#include "Girl.h"
#include "Test.h"
#include "Gift.h"
using namespace std;
class Read {
	public:
		void Parse(string input,vector<string> &v);/*!<Function Use to Parse stringss*/
		int Convert(string str); /*!<Function used to convert string to number*/
		string RandTypeB();
		string RandTypeG();
		void BRead_boy(vector<Boy> &v);/*!<Function Read input for Boy from  file and stores in vector*/
		void GRead_girl(vector<Girl> &v);/*!<Function Reads INput for Girl from File and stores in vector*/
		void readGift(vector<Gift> &g);/*!<Function Reads Input from File for Gifts and stores in vector*/
};
#endif

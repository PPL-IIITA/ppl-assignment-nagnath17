#include "Read.h"
#include "Boy.h"
#include "Girl.h"
#include "Gift.h"
#include <bits/stdc++.h>
using namespace std;
/*!<Function Parses the string */

void Read::Parse(std::string input,vector<string> &v) {
	
	string ans;
	string temp = input;
	replace(temp.begin(),temp.end(),';',' ');
	stringstream buff;
	buff<<temp;
	while (buff >> ans) {
		v.push_back(ans);
	}
	
}
/*!<Functionn convets string To Integer*/

int Read:: Convert (std::string str) {
	
	int ret;
	stringstream convert(str);
	convert>>ret;
	return ret;
}
string Read::RandTypeB() {

	int rem = rand()%3+1;
	if (rem == 1) {
		return "Miser";
	}else if (rem == 2 ) {
		return "Generous";
	}else {
		return "Geek";
	}

}
string Read:: RandTypeG() {
	int rem= rand()%3 + 1;
	if (rem == 1) {
		return "Choosy";
	}else if (rem == 2) {
		return "Normal";
	}else {
		return "Desperate";
	}
}
/*!<Function Read input Nad stores in arraay*/
void Read::BRead_boy(vector<Boy> &v) {
	
	srand(time(NULL));
	vector<string> tmp;
	string input;
	ifstream infile("boytest.csv");
	while (getline(infile,input)) {
		tmp.clear();
		Parse(input,tmp);
		int p1;
		std::string p2;
		p2 = RandTypeB();
		p1 = rand()%100;
		Boy b(tmp[0],Convert(tmp[1]),Convert(tmp[2]),Convert(tmp[3]),p1,p2);
		v.push_back(b);	
	}
}
/*!<Function Read input Nad stores in arraay*/

void Read::GRead_girl(vector<Girl> &v) {

	srand(time(NULL));
	vector<string> tmp;
	string input;
	ifstream infile ("girltest.csv");
	while (getline (infile,input)) {
		tmp.clear();
		Parse(input, tmp);
		int p1;
		std::string p2;
		p1 = rand()%100;
		p2 =RandTypeG();
		Girl g(tmp[0],Convert(tmp[1]),Convert(tmp[2]),Convert(tmp[3]),p1,p2);
		v.push_back(g);
	}
}
/*!<function To Read Gifts*/
void Read:: readGift(vector<Gift> &v) {

	vector<string>tmp;
	tmp.clear();
	string input;
	ifstream infile("gifttest.csv");
	while (getline(infile,input))  {
		tmp.clear();
		Parse(input,tmp);
		Gift gt(tmp[0],Convert(tmp[1]),Convert(tmp[2]),Convert(tmp[3]));
		v.push_back(gt);
	}
}

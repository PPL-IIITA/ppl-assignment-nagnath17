#include "Q2.h"
#include <string.h>
#include <algorithm>
#include <iostream>
#include "Boy.h"
#include "Girl.h"
#include "Gift.h"
#include "Read.h"
#include "Log.h"
#include "Test.h"
#include "Q1.h"
#include <vector>

using namespace std;
/*for Printing happiness and compatible*/

void Q2::print(vector< pair <int, pair<string,string> > > &v1) {
	int len = v1.size();
	for (int i = 0; i < len; i++) {
		cout<<v1[i].second.first<<" "<<v1[i].second.second<<endl;
	}
}
/*algorithm for sorting according to first value */

void Q2::Bubble(vector< pair < int, pair< string,string > > > &v1) {
	int len = v1.size();
	for (int i = 0; i < len; i++) {
		for (int j  = 0; j < len; j++) {
			if (v1[i].first > v1[j].first ) {
				swap(v1[i],v1[j]);
			}
		}
	}

}
/*calculate compatability*/
int Q2:: Compatibility(Boy b,Girl g) {

	return ((b.getBudget() - g.getBudget())+abs(b.getIntelligence()-g.getIntelligence()+abs(b.getIntelligence()-g.getIntelligence())));
}

/*assigns Gifts ans and calculates Happiness of Both Boy And Girl */


void Q2:: FormBasket(Boy b,Girl g,vector<Gift> &gtlist,int *value1,int *value2) {

	string typeB = b.getType();
	string typeG = g.getType();
	int expen = b.getBudget();
	int money_final;
	int len = gtlist.size();
	int p1 = 0;
	int happinessB;
	int happinessG;
	int essential = 0,luxury = 0;


	for (auto it  = gtlist.begin(); it != gtlist.end(); it++) {
		if ((*it).getType() == 0 && p1+(*it).getPrice() < expen) {
			p1 += (*it).getPrice();
			essential += (*it).getPrice();
		}else if ((*it).getType() == 1 && p1+(*it).getPrice() < expen) {
			p1 += (*it).getPrice();
			luxury += (*it).getPrice();
		}else {
			if ((*it).getPrice()+p1 < expen) {
				p1 += (*it).getPrice();
			}
		}
	}
	if (typeG == "Choosy") {
		happinessG =(long long)((2*luxury+essential));
	}else if (typeG == "Normal") {
		happinessG = p1;
	}else {
		happinessG = (p1*p1);
	}
	if (typeB == "Miser") {
		happinessB = (expen - p1)%10;
	}else if (typeB == "Generous") {
		happinessB = happinessG;
	}else {
		happinessB = g.getIntelligence();
	}
	*value1 = happinessB%100;
	*value2 = happinessG%100;

}
/*Function to calulate Happiness And compatiility  And stores them */
void Q2:: Solve(vector<Boy> &boylist, vector<Girl> &girllist,vector< pair< Girl,Boy> > &couple,vector<Gift> &gtlist) {
	
	
	Log lg("logfile.txt");
	vector<Gift> temp;
	vector< pair < int, pair< string,string > > > happy;
	vector< pair < int, pair< string,string > > > compatible;
	int p1 = 0;
	Boy b1("NULL",-1,-1,-1,-1,"0");
	Girl g1("NULL",-1,-1,-1,-1,"0");
	int happinessB;
	int happinessG;
	temp = gtlist;
	int sz = couple.size();
	for (int i = 0; i < sz; i++) {
		g1 = couple[i].first;
		b1 = couple[i].second;
		if (b1.getName() == "NONE")continue;
		lg.logger(g1.getName()+"has received gift from", b1.getName());
		FormBasket(b1,g1,temp,&happinessB,&happinessG);
		happy.push_back(make_pair((happinessB+happinessG),make_pair(b1.getName(),g1.getName())));
		p1 = Compatibility(b1,g1);
		compatible.push_back(make_pair(p1,make_pair(b1.getName(),g1.getName())));

	}
	Bubble(happy);
	Bubble(compatible);
	cout<<happy.size()<<" "<<"happiest couples"<<endl;
	cout<<endl;
	print(happy);
	cout<<happy.size()<<" "<<"compatible couples"<<endl;
	 
	print(compatible);


}

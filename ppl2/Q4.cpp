#include "Q4.h"
#include "Boy.h"
#include "Girl.h"
#include "Gift.h"
#include "Read.h"
#include "Log.h"
#include "Test.h"
#include "Q1.h"
#include "Q2.h"
#include <bits/stdc++.h>

using namespace std;


void Q4::print(vector< pair <int, pair<string,string> > > &v1) {
	int len = v1.size();
	for (int i = 0; i < len; i++) {
		cout<<v1[i].second.first<<" "<<v1[i].second.second<<endl;
	}
}


void Q4::Bubble(vector< pair < int, pair< string,string > > > &v1) {
	int len = v1.size();
	for (int i = 0; i < len; i++) {
		for (int j  = 0; j < len; j++) {
			if (v1[i].first > v1[j].first ) {
				swap(v1[i],v1[j]);
			}
		}
	}

}


vector< pair < int, pair< string,string > > > Q4::Breakup(
	    vector< pair < int, pair< string,string > > > &List
	) {

    vector< pair < int, pair< string,string > > > newList;
	Bubble(List);
	for (int i = 0; i < 2; i++) {
		List.pop_back();
	}
	print(List);
	newList = List;
	return newList;
}

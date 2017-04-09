#ifndef Q2_H
#define Q2_H
#include <string.h>
#include <algorithm>
#include <iostream>
#include "Boy.h"
#include "Girl.h"
#include "Gift.h"
#include "Read.h"
#include "Test.h"
#include "Q1.h"
#include <bits/stdc++.h>
using namespace std;
/*!<This class contains Functions which calculate compatibility and Happiness*/
class Q2 {
	public:
		void FormBasket(Boy b, Girl g, vector<Gift> &gtlist, int *value1, int *value2);  /*!<Funtioo forms Basket and return happiness of Both couples*/
		vector< pair < int, pair< string,string > > > Solve(vector<Boy> &boylist, vector<Girl> &girllist,vector< pair< Girl,Boy> > &couple,vector<Gift> &gtlist);  /*!<Helper function*/
		int Compatibility(Boy b,Girl g); /*!< calulates compatibility*/
		void Bubble(vector< pair <int, pair<string,string> > > &v1);   /*!<function is used for sorting*/
		void print(vector< pair <int, pair<string,string> > > &v1);  /*!<prints k happiest couples and also compatabile couples*/
		
};

#endif

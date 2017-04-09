#ifndef Q4_H
#define Q4_H
#include "Boy.h"
#include "Girl.h"
#include "Gift.h"
#include "Read.h"
#include "Test.h"
#include "Q1.h"
#include "Q2.h"
#include <bits/stdc++.h>
using namespace std;
/*!<This class contains performs breakup of couples and assigns */
class Q4 {
    public:
	void print(vector< pair <int, pair<string,string> > > &v1);/*!<This Funtion is used to print couples after Breakup*/
	void Bubble(vector< pair < int, pair< string,string > > > &v1);/*!<this is used to sort Least happiest couples*/
vector< pair < int, pair< string,string > > > Breakup(
	    vector< pair < int, pair< string,string > > > &List
	);/*!Used to k Leas happy couples*/
};

#endif

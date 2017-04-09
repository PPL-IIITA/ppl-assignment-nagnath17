#ifndef Q5_H
#define Q5_H
#include "Boy.h"
#include "Girl.h"
#include "Gift.h"
#include "Read.h"
#include "Test.h"
#include "Q1.h"
#include "Q2.h"
#include <bits/stdc++.h>

using namespace std;

/*!<Assigns couples Alternatively*/

class Q5 {
	public :
		void NewCombine(vector<Boy> &boylist,vector<Girl> &girllist,vector< pair <Girl,Boy> > &v);
};
#endif



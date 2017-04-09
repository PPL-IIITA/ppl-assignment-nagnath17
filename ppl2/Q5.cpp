#include "Boy.h"
#include "Girl.h"
#include "Test.h"
#include "Q1.h"
#include "Test.h"
#include "Read.h"
#include "Log.h"
#include "Q2.h"
#include "Q5.h"
#include "Q4.h"
#include <bits/stdc++.h>

using namespace std;
/*This function assigns girls and boys alternatively*/

void Q5::NewCombine(vector<Boy> &boylist,vector<Girl> &girllist,vector< pair <Girl,Boy> > &v) {	

    int cnt = 0;
    for (auto it1 = girllist.begin(); it1 != girllist.end(); it1++) {
	Boy temp("NONE",-1,-1,-1,0,"0");
	int pp = it1->getCriterion()%3;
	if (pp == 0) {
	    for (auto it2 = boylist.begin(); it2 != boylist.end(); it2++) {
		if (it1->getBudget() < it2->getBudget()) {
		    if (it1->getStatus() == false && it2->getStatus()==false) {
			if (it1->getAttractiveness() >= it2->getAttractiveness()) {
			    it2->setStatus(1);
			    it1->setStatus(1);
			    temp = *it2;
			    if (temp.getAttractiveness() < it2->getAttractiveness()) {
				temp.setStatus(0);
				it2->setStatus(1);
				temp = *it2;
			    }
			}

		    }
		}
	    }
	}
	if (pp == 1) {
	    for (auto it2 = boylist.begin(); it2 != boylist.end(); it2++) {
		if (it1->getBudget() < it2->getBudget()) {
		    if (it1->getStatus() == false && it2->getStatus()==false) {
			if (it1->getAttractiveness() >= it2->getAttractiveness()) {
			    it2->setStatus(1);
			    it1->setStatus(1);
			    temp = *it2;
			    if (temp.getIntelligence() < it2->getIntelligence()) {
				temp.setStatus(0);
				it2->setStatus(1);
				temp = *it2;

			    }

			}


		    }

		}

	    }

	}
	if (pp == 2) {
	    for (auto it2 = boylist.begin(); it2 != boylist.end(); it2++) {
		if (it1->getBudget() < it2->getBudget()) {
		    if (it1->getStatus() == false && it2->getStatus()==false) {
			if (it1->getAttractiveness() >= it2->getAttractiveness()) {
			    it2->setStatus(1);
			    it1->setStatus(1);
			    temp = *it2;
			    if (temp.getBudget() < it2->getBudget()) {
				temp.setStatus(0);
				it2->setStatus(1);
				temp = *it2;

			    }

			}


		    }

		}

	    }

	}
	string str1 = it1->getName();
	string str2 = temp.getName();
	cnt++;
	if (cnt %2 == 0)
	    v.emplace_back(make_pair(*it1,temp));
	else 
	    v.insert(v.begin(),make_pair(*it1,temp));
    }
}

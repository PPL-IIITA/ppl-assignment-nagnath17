#include "Boy.h"
#include "Girl.h"
#include "Test.h"
#include "Q1.h"
#include "Test.h"
#include "Read.h"
#include "Log.h"
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
/*Funnction assigns Girls to boys ans return Vector*/
void Q1:: combine(vector<Boy> &boylist,vector<Girl> &girllist,vector< pair <Girl,Boy> > &v) {	
	Log lg("logfile.txt");
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
		lg.logger(str1, str2);
		v.push_back(make_pair(*it1,temp));
		cout<<it1->getName()<<" "<<temp.getName()<<endl;
	}
	
}

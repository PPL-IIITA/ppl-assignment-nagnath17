#include <bits/stdc++.h>
#include "Test.h" 
#include "Boy.h"
#include "Girl.h"
#include "Read.h"
#include "Q1.h"
#include "Log.h"
#include "Gift.h"
#include "Q2.h"
#include "Q4.h"
#include "Q5.h"

typedef pair<Boy,Girl> PII;
using namespace std;

int main() {
    Test t;
    t.generate(10,5);
    t.generateGift();

    vector<Boy> v_boy;
    vector<Girl> v_girl;
    vector<Gift> v_gift;
    Read r;
    r.BRead_boy(v_boy);
    r.GRead_girl(v_girl);
    r.readGift(v_gift);
    vector < pair <Girl,Boy> > v;
    Q1 pp;
    pp.combine(v_boy,v_girl,v);
    Q2 pp1;
    vector< pair < int, pair< string,string > > > ans;
    ans = pp1.Solve(v_boy,v_girl,v,v_gift);
    vector< pair < int, pair< string,string > > > ans1;
    Q4  pp2;
    ans1 = pp2.Breakup(ans);
    int n;
    cout<<"Algo to use\n";
    cout<<"enter 1 for Algo 1 AND  2 for Algo for Question"<<endl;
    cin>>n;
    vector< pair <Girl,Boy> > pp5,ans5;
    Q5 check5;
    if (n == 1) {
   
	pp.combine(v_boy,v_girl,pp5);
    }else {
	check5.NewCombine(v_boy,v_girl,pp5);
	for (auto i = 0; i < pp5.size(); i++){
	    cout<<pp5[i].first.getName()<<" "<<pp5[i].second.getName()<<endl;
	}
    }

    return 0;
}

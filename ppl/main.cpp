#include <bits/stdc++.h>
#include "Test.h" 
#include "Boy.h"
#include "Girl.h"
#include "Read.h"
#include "Q1.h"
#include "Log.h"
#include "Gift.h"
#include "Q2.h"
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
    pp1.Solve(v_boy,v_girl,v,v_gift);
    return 0;
}

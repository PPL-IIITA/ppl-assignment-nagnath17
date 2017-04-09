#ifndef Q1_H
#define Q1_H
#include <string>
#include <vector>
#include "Boy.h"
#include "Girl.h"
#include "Test.h"
#include "Read.h"
/*!<This class coulpes boys ans girls*/
using namespace std;
class Q1 {
	public:
		void combine(vector<Boy> &v1, vector<Girl>&v2, vector< pair <Girl,Boy> > &v);/*!<This function Takes couples boys and girl*/
};

#endif

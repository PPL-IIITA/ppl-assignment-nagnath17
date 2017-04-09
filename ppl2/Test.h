#ifndef TEST_H
#define TEST_H
#include <string>

using namespace std;
class Test {

    public:
	string name;
	int attractiveness;
	int budget;
	int price,value;
	int intelligence,rating ,difficulty;
	int uvalue,uclass;
	void generate(int n,int m);/*!<generates random input for boy and Girl qualiteis*/
	void generateGift();/*!<generates Random gifts and their types ans values*/
    private:
	int getRand();/*!<used to generate Random Input*/
};
#endif

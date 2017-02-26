#ifndef BOY_H
#define BOY_H
#include <string>

using namespace std;
/*!< this class contains attributes of boys and their behaviour*/
class Boy { 

	/*!<arrtibutes of Boys*/

	public:
		string name;
		int attractiveness;
		int budget;
		int intelligence;
		bool status;
		int criterion;
		string type;
		string girlfriend_name;
		string girlfriend_type;

		/*!<Functions */


		Boy(string name,int attractiveness,int budget,int intelligence,int criterion,string type);
		string getName();
		int getAttractiveness();
		int getIntelligence();
		int getBudget();
		bool getStatus();
		void setStatus(bool n);
		string getType();
		int getCriterion();
		string getgirlfriendName();
		string getgirlfriendType();
		string setgirlfriendName(string girl_name);
		string setgirlfriendType(string girl_type);

};

#endif

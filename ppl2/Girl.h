#ifndef GIRL_H
#define GIRL_H
#include <string>

using namespace std;
/*!<class contains all information about Girl and The Functions relating them*/
class Girl { 

	/*!<arrtibutes of GIRL*/
	public:
		string name;
		int attractiveness;
		int budget;
		int intelligence;
		bool status;
		int criterion;
		string type;
		string boyfriend_name;
		string boyfriend_type;

		/*!<Functions */


		Girl(string name,int attractiveness,int budget,int intelligence,int criterion,string type);
		string getName();
		int getAttractiveness();
		int getIntelligence();
		int getBudget();
		bool getStatus();
		void setStatus(bool n);
		string getType();
		int getCriterion();
		string getboyfriendName();
		string getboyfriendType();
		string setboyfriendName(string boy_name);
		string setboyfriendType(string boy_type);

};

#endif

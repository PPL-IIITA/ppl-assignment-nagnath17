#ifndef LOG_H
#define LOG_H
#include <time.h>
#include <fstream>
using namespace std;
/*!< class for generating logs*/
class  Log{
	public:
		time_t timer;
		string str;
		fstream file;
		Log(string file);
		void logger(string str1,string str2);
		~Log();

};
#endif

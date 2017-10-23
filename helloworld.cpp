#include <iostream>
#include <stdlib.h> 
#include <stdio.h>
#include <fstream>
#include   <time.h> 

using namespace std;

struct tm
{
	int?tm_sec;??
	int?tm_min;?
	int?tm_hour;??
	int?tm_mday;??
	int?tm_mon;??
	int?tm_year;?

}

int main()
{
	char buff[32] = {0};
	time_t now;
	now = time(NULL);
	struct tm timeinfo = *localtime(&now);
	strftime(buf,?sizeof(buf),?"%Y%m%d%H%M%S",?&timeinfo);??
	string path = buf +".txt";
	fstream file;
	file.open(path, ios::out );
	if (!file)
	{
		return false;
	}
	file.close();
	ofstream myfile("ls_time.txt",ios::out);  
 	if(!myfile)
 		{
			cout<<"error !";
		 }
 	else
		{
			myfile<<"Auto test result!"<<endl;
			myfile.close();
		}

	return 0;

}
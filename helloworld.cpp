#include <iostream>
#include <stdlib.h> 
#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
	time_t ls_time;
	time(&ls_time); 
	string path = ls_time+".txt";
	fstream file;
	file.open( path, ios::out );
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
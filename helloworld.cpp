#include <iostream>
#include <stdlib.h> 
#include <stdio.h>
#include <fstream>? 

using namespace std;

int main()
{
	string ls_time = system("time"); 
	string path = m_strPath + '\\' + ls_time+'.txt';
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
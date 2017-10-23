#include <iostream>
#include <stdlib.h> 
#include <stdio.h>
#include <fstream>
#include   <time.h> 

using namespace std;

int main()
{
	CTime time = CTime::GetCurrentTime(); ///构造CTime对象
	CString m_strTime = time.Format("%Y-%m-%d %H:%M:%S");  
	string path = m_strTime +".txt";
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
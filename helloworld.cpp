#include <iostream>
#include <stdlib.h> 
#include <stdio.h>
#include <fstream>
#include <time.h> 

using namespace std;

 

int main()
{
        char buf[32] = { 0 };
        time_t now;
        now = time(NULL);
        struct tm timeinfo = *localtime(&now);
        strftime(buf, sizeof(buf), "%Y%m%d%H%M%S", &timeinfo);
        string path = string(buf) + ".txt";
        fstream file;
        file.open(path.c_str(), ios::out);
        if (!file)
        {
            return false;
        }
        file.close();
        ofstream myfile(path.c_str(), ios::out);
        if (!myfile)
        {
            cout << "error !";
        }
        else
        {
            myfile << "Auto test result!" << endl;
            myfile.close(); 
        }
        
         //yangl add
        cout << "a quick brown fox jumps over the lazy dog." << endl;
        
        //zhangjr add
        cout << "test aliyun docker" << endl;

        return 0; 

}

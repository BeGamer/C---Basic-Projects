/*
A simple text-file opening program by Kyron Taylor.
Coded as part of learning C++.

TODO: - Find a way to get while to work in order to - while(FN != 'exit'){...}
	  - Fix buffer overflow.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

string FN;
string text;

    while(!FN.compare("FN"))
    {
    FN="";
	cout<<"\nThis is a test program by Kyron Taylor.\nType in the name of your file to open it.\n\n";
	cin >> FN;
	ifstream file (FN);
	if(file.is_open())
	{
		cout<<"\nFileName: " <<FN <<"\n\n";

		while(file.good())
		{
			getline (file, text);
			cout<< text <<endl;
	}
		file.close();
    }
        else
        {
		cout<<"\nCouldn't find the specified file.\nMaybe you forgot the extention?\n\n";
        }
    }
}

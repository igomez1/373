#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <cctype>
using namespace std;
int main(int argc, char** argv)
{
	string name ;
	name = argv[1];    
	vector <string> my_arr;

	ifstream my_file(name);
	string line; 
	if (my_file.is_open()){
		while(getline(name, line)){
			string new_line;
			new_line = line + "\n";
			my_arr.push_back(new_line);	
		}
		my_file.close();
		//return my_arr;
	}
	else{
		cout << "Unable to open file, does not exist." <<endl;
		exit(EXIT_FAILURE);
	}



    return 0;

}

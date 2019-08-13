#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool validuser(string, string);

int main () 
{
		string line;
		string user = "";
    	ofstream file;
        bool avalible = false; 
		cout << "What is you username?\n";
		cin >> user;
		avalible = validuser(line, user);
		if (avalible)
		{
             file.open ("txt.txt", std::ios_base::app);

			 file << user <<endl;
			 file.close();
		}

		return 0;


}
bool validuser(string line, string user)
{
		ifstream myfile ("txt.txt");

		if (myfile.is_open())
		{

				while ( getline (myfile,line) )
				{
						if (user==line)
						{
								cout << "User taken\n";
								return false;
						}
				}
				myfile.close();
		}
		else
		{
				cout << "Unable to open file";
				return false;
		}
		return true;
}

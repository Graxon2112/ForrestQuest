#include <iostream> 
#include <string>
#include <unistd.h>//sleep
#include <cstdlib>//sleep
#include <fstream>//read and write file




using namespace std;


void intro();
string getuser(string);
void loadI();
void loadII();
void greetuser(string);
void ask();
void i();
bool validuser(string);
void saveuser(string);
string redo(string);

int main()
{     
		string user = "";
		string y = "y";
		string yy = "";








		intro();      
		user = getuser(user);
		loadI();
		loadII();
		validuser(user);
		user = redo(user);
		greetuser(user);
		ask();
		saveuser(user);












}//end main
void i()
{

}
void ask()
{
		string n = "n";
		string nn = "";
		cout << "Are you new to Forrest Quest? [y/n]"<<endl;
		cin >> nn;
		if (n == nn)
		{
				cout << "Ok then, you already know the rules, how to play,etc. Let's get started!"<<endl;
				//start program(program())
		}
		else
		{

				i();//new function that tells you rules
		}
}

void intro()
{
		cout << "/                                   \\ "<<endl; 
		cout << "/              Forest  Quest        \\  "<<endl;
		cout << "/     The #1 Forest adventure game  \\  "<<endl;
		cout << "/                                   \\  "<<endl;
} 

string getuser(string poopypants) 
{

		cout << " please enter your username (no spaces) "<<endl;
		cin >> poopypants;
		return poopypants;
}


void loadI()
{
		system("clear");
		cout << "                               Loding user...     	         "<<endl;
		//        sleep(5);
}	

void loadII()
{
		system("clear");
		cout << "                               Loding world...                 "<<endl;
		//        sleep(10);
		system("clear");
}	
void greetuser(string user)
{
		cout << "Hi, " + user + "!"<<endl;

}
bool validuser(string user)
{
		ifstream file ("Users.txt");
		string line;

		if (file.is_open())
		{
				while ( getline (file,line) )
				{
						if (line == user)
						{
								cout << "User " << user << " Taken"<<endl;
								return false;

						}
				}//end while
		}//end first if
		else
		{
				system("clear");
				cout <<"Something Went Wrong. Please Restart The Game\n";
		}//end else
		return true;
}//end function
void saveuser(string user)
{
		ofstream file;
		file.open ("Users.txt", std::ios_base::app);
		file << user <<endl;
		file.close();
}

string redo(string user)
{
		while(!validuser(user))
		{
				cout << "User Taken. please Re-Enter A New Username\n";	
        		user = getuser(user);
		}
		return user;
}

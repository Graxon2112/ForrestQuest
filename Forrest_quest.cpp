#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>



using namespace std;


void intro();
string getuser(string);
void loadI();
void loadII();
void greetuser(string);
void ask();

int main()
{     
        string user = "";
		string y = "y";
		string yy = "";
		intro();      
		user = getuser(user);
        loadI();
		loadII();
		greetuser(user);
		ask();
}//end main        
void ask()
{
      cout << "Are you new to Forrest Quest? [y/n]"<<endl;
	  cin >> yy;
	  if (y == yy)
	  {
			  cout << "Ok then, you already know the rules, how to play,etc. Let's get started!"<<endl;
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
        sleep(5);
}	

void loadII()
{
        system("clear");
        cout << "                               Loding world...                 "<<endl;
        sleep(10);
        system("clear");
}	
void greetuser(string user)
{
    cout << "Hi, " + user + "!"<<endl;
	
}

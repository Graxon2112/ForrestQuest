#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>



using namespace std;


void intro();



int main()
{    
      string user = "";
intro();      

           cout << " please enter your username (no spaces) "<<endl;
       cin >> user;
       system("clear");
       cout << "                               Loding user...              "<<endl;
       sleep(5);
       system("clear");
       cout << "                               Loding world...                 "<<endl;
       sleep(10);
       system("clear");
       cout << "Hi, " + user + "!"<<endl;





                                                                    
       

}//end main        
  
       

void intro()
{
       cout << "/                                           \\ "<<endl; 
       cout << "/                      Forest  Quest        \\  "<<endl;
       cout << "/                                           \\  "<<endl;
       cout << "/                                           \\  "<<endl;
} 
 
 
 

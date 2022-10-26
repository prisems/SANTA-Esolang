#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;


int main() { 
	system("clear");
	string input, print, comment, bag, start, coal_check;
  string fix = "NIL";
	int cookies, milk;
  int line = 1;
  int loop = 1;
  int coal = 2;
  cin >> start;
  if(start == "CHRISTMAS!"){
  while (loop == 1) {
    line = line + 1;
    cout << "> ";
	cin>>input;
	if (input == "SANTA!"){
	cout << "Hello, World!" << endl; 
	}
	else if(input == "PRINTER"){ 
    getline(cin,print);
		cout << print << endl;
	}
	else if (input == "MILK!"){
		int bottle = 99;
    	while (bottle > 0){
	    	cout << bottle << " glasses of milk on the wall,"
	        << bottle << " glasses of milk." << endl;
	    	bottle--;
	    	cout << "Take one down and pass it around" << bottle << " " << "glasses of milk on the wall" << endl;
	    	if (bottle == 1){
	        break;
	    	}
	    }
	    cout << "1 glass of milk on the wall, 1 glass of milk." << endl;
	    cout << "Take one down and pass it around, no more glasses of milk on the wall" << endl;
	    cout << "No more glasses of milk on the wall, no more glasses of milk." << endl;
	    cout << "Go to the store and buy some more, 99 glasses of milk on the wall.";

    return 0;
	}
  else if(input == "HOHOHO"){
    getline(cin, comment);
    }
    else if(input == "COOKIES"){
      cin >> cookies; 
      }
      else if(input == "MILK"){
        cin >> milk;
      }
        else if(input == "ADD"){
          cout << cookies + milk << endl;
        }
          else if(input == "MULTIPLY"){
          cout << cookies * milk << endl;
        }
            else if(input == "SUB"){
          cout << cookies - milk << endl;
        }
              else if(input == "DIV"){
          cout << cookies / milk << endl;
                }
                else if(input == "COAL"){
                  loop = 2;
                  coal = 1;
                  while (coal == 1){
                  cin >> coal_check;
                  if(coal_check == "CHRISTMAS!"){
                    loop = 1;
                    coal = 2;
                  }
                  else{
                    cout << "COAL: PROGRAM STOPPED" << endl;
                    cout << "FIX: CHRISTMAS!" << endl;
                  }
                    }
                  }
     else{
      cout << "THERE IS A NAGUTHY CHILD ON LINE [" << line << "]" << endl;
       cout << "    FIX: " << fix << endl;
    }
    }
  }
}

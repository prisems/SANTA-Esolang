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
	string input, print, comment;
	int cookies, milk;
  int loop = 1;
  while (loop == 1) {
	cin>>input;
	if (input == "SANTA!"){
	cout << "Hello, World!" << endl; 
	}
	else if(input == "PRINTER"){ 
    getline(cin,print);
		cout << print << endl;
	}
	else if (input == "BEER"){
		int bottle = 99;
    	while (bottle > 0){
	    	cout << bottle << " bottles of beer on the wall,"
	        << bottle << " bottles of beer." << endl;
	    	bottle--;
	    	cout << "Take one down and pass it around" << bottle << " " << "bottles of beer on the wall./n" << endl;
	    	if (bottle == 1){
	        break;
	    	}
	    }
	    cout << "1 bottle of beer on the wall, 1 bottle of bear." << endl;
	    cout << "Take one down and pass it around, no more bottles of beer on the wall./n" << endl;
	    cout << "No more bottles of beer on the wall, no more bottls of beer." << endl;
	    cout << "Go to the store and buy some more, 99 bottles of beer on the wall.";

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
     else{
      cout << "COAL(err_unknown_input)" << endl;
    }
   }
}

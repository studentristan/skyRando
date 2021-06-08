#include <iostream>
#include <list>
#include <fstream>
using namespace std;

int selection;
int endThePain = 0;

void addShit(){                             //adds stuffz
	cout << "add" << endl << endl;
}

void listShit(){                           //lists all the stuffz u add
	cout << "list" << endl << endl;
}

void roll(){                               //rolls on the list of stuffz
	cout << "roll" << endl << endl;
}

void endProgram(){                         //sets endThePain to 1, ending the loop. 
	cout << "end" << endl << endl;
	endThePain = 1;
}

void story(){
	cout << "What, you thought I was gonna take the time to code a choose your own adventure game in here? Not until you break 500 subscribers. Then I'll do it, and you can play it on stream. " << endl << endl << endl << endl;
}

int main(){
	
    cout << "Welcome to the best thing I've ever made - an application for you to randomize what you are doing on stream! No garuntee I will finish this on this computer, but I will post it on Github when it is done." << endl;
    

	while(endThePain == 0){
	
		cout << "You prolly wanna know what you can do. Here's the options (pick one): " << endl << "1. roll on the table!! " << endl << "2. list items" << endl << "3. add item(s)" << endl << "4. turn to page 43 to retrieve the sword from the stone..." << endl << "0. close the program and fuck off" << endl << endl;
	
		cin >> selection;
	
		if(selection == 1){
			roll();
		} else if(selection == 2){
			listShit();
		} else if(selection == 3){
			addShit();
		} else if(selection == 4){
			story();
		} else if(selection == 0){
			endProgram();
		} else {
			cout << "Hey dumbfuck, that's not an option. The Game. That's what you get for being stupid. Try again. " << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			main();
		}
	
	}
	
	
	
	return 0;
}
//alright. At least we got it working...

// C++ is a object orientated language

// How to compile on Linux:
// 1. install compiler: sudo apt-get install build-essential
// 2. g++ filenema.c -o executablefilename
// 3. run program ./executablefilename

// pre-processor
#include <iostream>
using namespace std; 	// use group of functions that are part of the standard library

int main() {
	// ; tells the compiler that the line should be executed

	// variables
	int number;
	float decimal;
	char character;
	string word;
	int var;

	number = 1;
	decimal = 1.1;
	character = 'f';
	word = "hello";
	
	cin>>var; 	// read value from keyboard
	cin.ignore();	// reads a dummy (?) 

	cout<<number<<" "<<decimal<<" "<<character<<" "<<word<<endl;

	cin.get(); 	// stalls the program until a key is pressed
	return 0;	// return 0, 1 is error
}

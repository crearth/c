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
	cout<<"test!";

	cin.get(); 	// stalls the program until a key is pressed
	return 0;	// return 0, 1 is error
}

# Learning C++
C++ is a high-level and and an object orientated programming language (it can have parts known as classes or object).
Why C++? It is an extension to C (adds new features) 

## Compiling
- The compiler checks the code and is needed to translate your code for your hardware or computer (object file)  
	- https://nl.wikipedia.org/wiki/Compiler
- it produces a stand-alone executable program
	- process diagram: [diagram](https://www.learncpp.com/images/CppTutorial/Chapter0/Compiling-min.png)
- compiling is used for C, C++ and Pascal
- compilers exist for multiple CPUs
	- [diagram](https://www.learncpp.com/images/CppTutorial/Chapter0/Portability-min.png)
- Compile a .c file with `g++ filename.c -o executablefilename`  
Also possible:
- interpreting:
	- executes the instructions directly 
	- every time you run the program you need the interpreter
	- for scripting languages (Perl, JavaScript)
- Java ues a mix of the two

## Linking
- combines the object files to single executable
- links library files

## Libraries
Libraries are precompiled 'packages' for reuse in other programs.
- use `#include <library>` to include a library in the program 

### Different libraries
- standard:
	- iostream: for input and output capabilities

## TODO:

- [ ] visual studio compiler (Desktop development with C++)
- [ ] cin.ignore
- [ ] cin<< (output) and cin>> (intput)

## thanks
sites used:
	- https://www.learncpp.com
	- https://www.howtoforge.com

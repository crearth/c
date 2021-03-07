#include<iostream>
using namespace std;

int main ()
{

  	cout<<"enter two integer numbers"<<endl; 
  	 cin>>number1>>number2;
  
  for(int i =number1 ; i>0 ; i--)  
    {
  	  fact1=fact1*i;      
  }
   for(int j =number2; j>0 ;j--)
    {
  	  fact2=fact2*j;
    }
   cout<<"Factorial of "<<" "<<number1<<" "<<" is "<<" "<<fact1<<endl;
   cout<<"Factorial of "<<" "<<number2<<" "<<" is "<<" "<<fact2<<endl;
  
  return 0;
}

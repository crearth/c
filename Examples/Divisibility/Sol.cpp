#include<iostream>
using namespace std;

int main()
{
int number1 , number2;
cout<<"enter two integer numbers"<<endl;  
cin>>number1>>number2;

if((max(number1,number2))%(min(number1,number2))==0)  
{             
cout<<max(number1,number2)<<" "<<"is divisible by"<<" "<<min(number1,number2)<<endl;
}
else
{
 cout<<"Neither numbers are divisible by one another "<<endl;
}
  return 0;
}

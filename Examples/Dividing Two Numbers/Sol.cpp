#include<iostream>
using namespace std;

int main()
{
cout<<"enter two integer numbers"<<endl;  
cin>>number1>>number2;
  
division=(max(number1,number2))/(min(number1,number2));
cout<<"Division of "<<" "<<(max(number1,number2))<<" "<<"by"<<" "<<(min(number1,number2))<<" "<<"is :" <<division<<endl;

  return 0;
}

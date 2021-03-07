#include<iostream>
using namespace std;

int main()
{
int number1 , number2;
cout<<"enter two integer numbers"<<endl;  
cin>>number1>>number2;

 diff=(max(number1,number2))-(min(number1,number2));
 cout<<"Difference of "<<" "<<(max(number1,number2))<<" "<<"and"<<" "<<(min(number1,number2))<<" "<<"is :" <<diff<<endl;

  return 0;
}

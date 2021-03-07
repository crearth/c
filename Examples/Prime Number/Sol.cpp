#include<iostream>
using namespace std;

int main()
{
int number1 , number2 , k , c=0;
cout<<"enter two integer numbers"<<endl;  
cin>>number1>>number2;
  
for (k = 1; k <= number1; k++)
{
if (number1 % k == 0)
{
c++;
}
}
if (c == 2)
{
 cout <<number1<<" "<<" is a Prime number" << endl;
 }
else
{
  cout <<number1<<" "<<" is not a Prime number" << endl;
 }

for (k = 1; k <= number2; k++)
{
 if (number2 % k == 0)
{
c++;
}
}
if (c == 2)
{
 cout <<number2<<" "<<" is a Prime number" << endl;
}
else
{
 cout <<number2<<" "<<" is not a Prime number" << endl;
}
return 0;
}

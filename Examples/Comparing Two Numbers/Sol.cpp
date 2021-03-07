#include <iostream>
using namespace std;

int main ()
{
int NM1 , NM2;
cout<<"Enter numbers ";
cin>>NM1>>NM2;

if(NM1>NM2)
{
 cout<<NM1<<" "<<"is greater than"<<" "<<NM2;
}
else if (NM2>NM1)
{
cout<<NM1<<" "<<"is lesser than"<<" "<<NM2;
}
else
{
 cout<<cout<<NM1<<" "<<"is equal to"<<" "<<NM2;
}
return 0;
}

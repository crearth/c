#include <iostream>

using namespace std;
int main()
{
 float  Balance , BeginAmt , charge=0.50;
 int WithAmt ;
 
 cin>>WithAmt;
  cin>>BeginAmt;
  

 if(((WithAmt+charge)<=BeginAmt)&& (WithAmt%5==0))
 {
Balance = (BeginAmt-(WithAmt+charge));
cout<<Balance;
  
 }
 else
 {
     cout<<BeginAmt;
 }

    return 0;
}

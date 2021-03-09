#include<iostream>
using namespace std;

int main()
{ 
    int n , k;            //n is the number of imputs and k is the value we going to divide the inputs by to check if it's divisible by k
	 int num ;
	int count =0 , l;    //a count variable to check how many inputs are divisble by k and a looping variable l for each value
 cin>>n>>k;

	for(l=0;l<n;l++).     //a looping statement to accept the input the numbers n times as well as  to check if each input is divisble by k   
	{
	cin>>num;

	if(num%k==0)         //If a number is divisble by another it does not leave a remainder hence why we say "num%k==0" , where % returns the remainder of operation
	{
	count++;              //since num%k==0 , we will increase count value by 1 as we have to find how many inputs are divisble by k
	}
	else
	{
	    count=count+0;
	}
	}

cout<<count;
return 0;
}

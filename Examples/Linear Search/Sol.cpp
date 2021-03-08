#include <iostream>
using namespace std;

int main ()
{
  int n , u , a[10] , x  , flag=1;
  cout<<"How many elements?";
 	cin>>n;
 	cout<<"\nEnter elements of the array\n";
   
 	for(u=0;u<n;u++)
     {
         cin>>a[u];
     }
 		

 	cout<<"\nEnter element to search:";
 	cin>>x;

 	for(u=0;u<n;u++)
 	{
 		if(a[u]==x)
 		{
 			flag=1;
 			
 		}
 	}

 	if(flag)
 		cout<<"\nElement is found at position "<<i+1;
 	else
 		cout<<"\nElement not found";
 	
   return 0;
}

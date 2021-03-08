#include<iostream>
using namespace std;

int main ()
{
  int t , n , A[100];
  cout<<"Enter number of elements in the array";
    cin>>n;
    for(t=0;t<n;t++)
    {
         cin>>A[t];
    }
     for(t=0;t<n;t++)
     {       
             if(A[t]>A[t+1])
             swap(A[t], A[t+1]);

     }
 for(t=0;t<n;t++)
     {       
       cout<<A[t]<<" ";

    }
  return 0;
} 

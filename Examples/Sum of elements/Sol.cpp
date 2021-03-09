#include<iostream>
using namespace std;

int main ()
{
int sum=0 , n , a[10];
cout<<"Enter number of array elements";
cin>>n;
cout<<"Enter  array elements";
for(i=0;i<n;i++)
{
 cin>>a[i];
}

for(i=0;i<n;i++)
{
 sum=sum+a[i];
}
cout<<"Sum of array :"<<" "<<n;

return 0;
}

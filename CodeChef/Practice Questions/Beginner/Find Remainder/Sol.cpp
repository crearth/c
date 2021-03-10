#include<iostream>
using  namespace std;

int main ()
{
    int n ;             // 'n' ~ number of inputs
    cin>>n;
    
    for(int i=0;i<n;i++)
    { 
    int  a , b;         // 'a' and 'b' ~ are the two values we are going to find the remainder of
    cin>>a>>b;
    int rem;
    
        if(a<b)         //we return a if a<b as the operation cannot be performed as the values & variables are int
        {
            cout<<a<<endl;;
        }
        else
        {
        rem=a%b;        //"%" ~ Always returns a remainder
        cout<<rem<<endl;
        
    }
    }
    
    return 0;
}

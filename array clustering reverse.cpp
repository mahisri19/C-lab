#include <iostream>
using namespace std;
int main()
{
    int n,i,t,j,max,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>t;
    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    if(n%2!=0)
    {
        
        for(i=0;i<n;i=i+t)
        {
            if(n-i>=t)
        {
            for(j=(i+t)-1;j>=i;j--)
            {
                
                cout<<a[j]<<" ";
            }
        }
        if(n-i<t&& i!=n-1)
        {
            k=n-i;
            int h;
            for(j=i;j<n;j=j+k)
            {
                for(h=(j+k)-1;h<=j;h--)
                {
                   cout<<a[i]<<" ";
                }
            }
          
            
        }
        
        }
        
        
    }
    
}

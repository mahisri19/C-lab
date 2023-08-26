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
        for(i=n-1;i>=0;i--)
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
            max=a[i];
            for(j=i;j<i+t;j++)
            {
                if(max<a[j])
                {
                    max=a[j];
                }
            }
            cout<<max<<" ";
        }
        if(n-i<t&& i!=n-1)
        {
            k=n-i;
            int h;
            for(j=i;j<n;j=j+k)
            {
                for(h=j;h<j+k;h++)
                {
                    max=a[h];
                if(max<a[h])
                {
                    max=a[h];
                }
                }
            }
            cout<<max<<" ";      
            
        }
        
        }
        
        
    }
    
}

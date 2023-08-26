#include <iostream>
using namespace std;
int main()
{
    int n,i,t,j,max,k,sum=0,sum2=0;
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
            if(a[i]%2==0)
            {
            	cout<<a[i]<<" ";
			}
        }
    }
    
    if(n%2!=0)
    {
        
            for(i=0;i<n;i=i+t)
        {
        	sum=0;
            if(n-i>=t)
        {
            for(j=i;j<i+t;j++)
            {
                if(a[j]%2==0)
                {
                	sum=sum+1;
				}
            }
            cout<<sum<<" ";

        }
        
        if(n-i<t&& i!=n-1)
        {
        	sum2=0;
            k=n-i;
            int h;
            for(j=i;j<n;j=j+k)
            {
            	sum2=0;
                for(h=j;h<j+k;h++)
                {
                    if(a[h]%2==0)
                {
                	sum2=sum2+1;
				}
                }
                cout<<sum2<<" ";
            }
              
        }
        
        }
        
        
    }
    
}

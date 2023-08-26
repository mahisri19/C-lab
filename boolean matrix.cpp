using namespace std;
int main()
{
    int i,j,m,n,g,h;
    cin>>m;
    cin>>n;
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>g;
    cin>>h;
    if(a[g][h]==1)
    {
            for(j=0;j<n;j++)
            {
                a[g][j]=1;
            }
        for(i=0;i<m;i++)
        {
            
                a[i][h]=1;
        }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }  
    }
    if(a[g][h]!=1)
    {
      for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }  
    }
    
}

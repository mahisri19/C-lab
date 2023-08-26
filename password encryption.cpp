#include <iostream>
#include <cstring>
using namespace std;
int main()
{
 char s[50],t[50];
 cin>>s;
 int i,shift;
 cin>>shift;
 for(i=0;i<strlen(s);i++)
 {
     s[i]=s[i]+shift;
     if(s[i]>'z')
     {
         s[i]=(s[i]-'z'+'a'-1);
     }
 }
 for(i=0;i<strlen(s);i++)
 {
     cout<<s[i];
 }
}

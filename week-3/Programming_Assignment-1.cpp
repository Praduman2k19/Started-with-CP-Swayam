#include <iostream>
using namespace std;
int fun(string s)
{
    int n=s.length();
    if(n>1)
    {
        if(s[0]=='1')
        {
            if(s[1]=='0')
            {
                s[1]='2';
                s[0]='3';
            }
        }
        if(s[n-1]=='0')
        {
            if(s[n-2]=='1')
            {
                s[n-2]='3';
                s[n-1]='2';
            }
        }
    }
    
    
    for(int i=1;i<n;i++)
    {
        if(s[i]=='1')
        {
            if(s[i-1]=='0')
            {
                s[i-1]='2';
                s[i]='3';
            }
        }
        if(s[i]=='1'&&i!=n-1)
        {
            if(s[i+1]=='0')
            {
                s[i+1]='2';
                s[i]='3';
            }
        }
    }
    
    // cout<<" "<<s<<" ";
    int zero=0,one=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1'||s[i]=='3')
        one++;
        if(s[i]=='0')
        zero++;
    }
    if(one==zero)
    return -1;
    if(one>zero)
    return 1;
    else
    return 0;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<fun(s)<<endl;
    }

}

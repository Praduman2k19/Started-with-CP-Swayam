#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        for(int i=1;i<500000;i++)
        {
            long long temp=0;
            for(int j=0;j<n;j++)
            {
                 temp+=ceil((arr[j]+0.0)/(i+0.0));
            }
            if(temp<=m)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}

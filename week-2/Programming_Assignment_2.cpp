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

        int low=1,minVal=0,temp=0,mid=0;
        int high=max_element(arr,arr+n)-arr;
        while(low<=high)
        {
            mid=(low+high)/2;
            temp=0;
            for(int j=0;j<n;j++)
            {
                 temp+=ceil((arr[j]+0.0)/(mid+0.0));
            }
            if(temp<=m)
            {
                minVal=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        cout<<minVal<<endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
string fun()
{
    int n;
    cin>>n;
    vector<int>arr1;
    vector<int>arr2;
    int arr[n],temp;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            cin>>temp;
            arr1.push_back(temp); 
        }
        else
        {
            cin>>temp;
            arr2.push_back(temp);
        }
    }
    
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int j=0;
    for(int i=0;i<n/2;i++)
    {
        arr[j++]=arr1[i];
        arr[j++]=arr2[i];
    }
    if(arr1.size()==(n/2)+1)
    arr[j++]=arr1[n/2];

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        return to_string(i);
    }
    return "OK";
}
int main() {
    int t,x=1;
    cin>>t;
    while(t--)
    {
        cout<<"Case #"<<x++<<": "<<fun()<<endl;
    }
}

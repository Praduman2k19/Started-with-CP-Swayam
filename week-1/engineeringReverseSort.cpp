#include <bits/stdc++.h>
using namespace std;
int cheak(int *a,int n)
{
    int arr[n];
    for(int i=0;i<n;i++)
    arr[i]=a[i];
    int ans=0,j,f;
    for(int i=0;i<n-1;i++)
    {
        f=min_element(arr + i, arr + n)-arr;
        for(int k=0;k<(f-i+1)/2;k++)
        {
            swap(arr[i+k],arr[f-k]);
        }
        ans+=f-i+1;
    }
    return ans;
}
void fun(int n)
{
    int c;
    cin>>c;
    int arr[n];
    for(int i=0;i<n;i++)
    arr[i]=i+1;
    // for(int i=0;i<n;i++)
    //     cout<<arr[i]<<" ";
    // cout<<endl;
    int f=0;
    do {
        if(cheak(arr,n)==c)
        {
            f=1;
            break;
        }
    } while (next_permutation(arr, arr + n));
    if(f==0)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main() {
     int t,t1=0;
    cin>>t; 

   while(t!=t1++)
   {
       int n;
       cin>>n;
       cout<<"Case #"<<t1<<": ";
       fun(n);
   }
}

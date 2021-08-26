#include <bits/stdc++.h>
using namespace std;
long long fun(long long n)
{
    long long arr[n], arr2[n];
    set<long long>s;
    for(long long i=0;i<n;i++)
    {
        long long a,b;
        cin>>arr[i]>>arr2[i];
        s.insert(arr[i]);
    }
    long long m=s.size();
    vector<vector<long long>>v(m);
    map<long long,long long>map;
    map.clear();
    long long k=0,f=0;
    for(long long i=0;i<n;i++)
    {
        if(map[arr[i]]==0&&arr[i]!=f)
        {
            map[arr[i]]=k;
            // cout<<arr[i]<<"->"<<map[arr[i]]<<" ";
            k++;
        }
        if(i==0)
        f=arr[0];
    }
    // cout<<endl;
    for(long long i=0;i<n;i++)
    {
        v[map[arr[i]]].push_back(arr2[i]);
        // cout<<map[arr[i]]<<" ";
    }
    for(long long i=0;i<m;i++)
    {
        sort(v[i].begin(),v[i].end());
    }
    long long ans=0;
    long long a[m];
    for(long long i=0;i<m;i++)
    {
        a[i]=v[i][0];
    }
    sort(a,a+m);
    for(long long i=0;i<m;i++)
    {
        ans+=a[i]*(i+1);
    }
    for(long long i=0;i<m;i++)
    {
        for(long long j=1;j<v[i].size();j++)
        ans+=v[i][j]*m;
    }

    return ans;


}
int main() {
   long long t;
   cin>>t;
   while(t--)
   {
       long long n;
       cin>>n;
       cout<<fun(n)<<endl;
   }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;cin>>t;
     while(t--){
        ll n,k;cin>>n>>k;
      vector<ll> A(n);
      for(int i=0;i<n;i++) cin>>A[i];
      ll l=0,r=11e11+5,L=11e11+5,R=0;
      while(l<=r){
         ll mid=(l+r)/2;
         bool low=0,high=0;
         for(int i=0;i<n;i++){
            ll x=(mid*(i+1))/k;
            
            if(x==A[i]) continue;
            else if(x>A[i]){
               high=1;break;
            }
            else if(x<A[i]){
               low=1;break;
            }
            cout<<mid/k<<" ";
         }
         
         if(!low&&!high) r=mid-1;

         else if(low) l=mid+1;
         else if(high) r=mid-1;
      }
      L=l;
      l=0,r=11e11+5,R=0;
      while(l<=r){
         ll mid=(l+r)/2;
         bool low=0,high=0;
         for(int i=0;i<n;i++){
            ll x=(mid*(i+1))/k;
            
            if(x==A[i]) continue;
            else if(x>A[i]){
               high=1;break;
            }
            else if(x<A[i]){
               low=1;break;
            }
            cout<<mid/k<<" ";
         }
         
         if(!low&&!high) l=mid+1;
         else if(low) l=mid+1;
         else if(high) r=mid-1;
      }
      R=r;
      cout<<L<<" "<<R<<"\n";
   }
}
#include <bits/stdc++.h>
using namespace std;

vector<long long>res;
vector<long long>primes;
void precompute(){

    for(int i=0;primes[i]<=1000000;i++){
       long long p=primes[i];
        for(int j=1;primes[j]<=41;j++){
            long long x=pow(p,primes[j]-1);
            if(x>1000000000000|| x<0) break;
            res.push_back(x);
        }
    }
    sort(res.begin(),res.end());
}
void SieveOfEratosthenes()
{
    int n=1000030;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
  
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
  
    for (int p=2; p<=n; p++)
       if (prime[p])
          primes.push_back(p);
}

long long  divCount(long long  n)
{
    return upper_bound(res.begin(),res.end(),n)-res.begin();
}
int  main()
{
    SieveOfEratosthenes();
    precompute();
    int t;
    scanf("%d",&t);
    while(t--)
    {
         long  n ;
        scanf("%ld",&n);
        printf("%lld\n",divCount(n));
    }
    return 0;
	
}
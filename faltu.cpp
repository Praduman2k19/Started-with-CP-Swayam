//Problem Link : https://szkopul.edu.pl/problemset/problem/w2LtiQBD8_pL0PTNosP1F83u/site/?key=statement


#include <iostream>
using namespace std;

int main () {
    long long n; 
    cin >> n;
    bool ans=(n&(n-1)) == 0;
    if(ans)
    cout <<"TAK\n";
    else
    cout<<"NIE\n";

    return 0;
}
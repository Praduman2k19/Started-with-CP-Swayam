#include <iostream>

//Problem Link : https://szkopul.edu.pl/problemset/problem/w2LtiQBD8_pL0PTNosP1F83u/site/?key=statement

using namespace std;

int main () {
    long long n; 
    cin >> n;
    cout <<(n&(n-1)) == 0 ? "TAK\n" : "NIE\n";

    return 0;
}
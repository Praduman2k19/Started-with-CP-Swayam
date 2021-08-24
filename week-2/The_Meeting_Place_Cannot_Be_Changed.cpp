
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include <iomanip>
#include<algorithm>
using namespace std;

double rightmost_Left_ep(vector<int>arr, vector<int>v, double t)
{       
        double result = INT_MIN;
        for(int i = 0 ; i < n ; i++)
        {       
            result = max( result , arr[i]- (v[i]*t));
        }
        return result;
}
double leftmost_Right_ep(vector<int>arr, vector<int>v, double t)
{
        double result = INT_MAX;
        for(int i = 0 ;i < n ;i++)
        {
                result = min(result , arr[i]+(v[i]*t));
        }
        return result;
}
bool is_feasible(vector<int>arr, vector<int>v, double k)
{
    return rightmost_Left_ep(k) <= leftmost_Right_ep(k);
}


int main()
{
    int n;
    cin>>n;
    vector<int> arr; 
    vector<int> v;
    
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    for(int i = 0 ; i < n ; i++)
        cin >> v[i];
                
    double lo = 0.0 , hi = 1e9;
    double mid;
    while((hi - lo) > 1e-6)
    {
        mid = (hi+lo)/2; 
        if(is_feasible(vector<int>arr, vector<int>v, mid))
            hi = mid;
        else
            lo = mid;
    }

    printf("%.9lf ",hi);
    return 0;
}
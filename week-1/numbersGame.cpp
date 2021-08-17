#include <bits/stdc++.h>
using namespace std;
const double golden = (1 + sqrt(5)) / 2;
// golden=1.61803;


long long fun()
{
    double a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        long long ans = 0;

        // Remember to account for symmetry when working through the
        // conditionals and counting in the code below.

        for (int b = b1; b <= b2; b++) {
            if (floor(golden * b) < a1 || floor((golden - 1) * b) > a2)
                
                // When either the lower threshold is below a1 or the upper threshold is above a2,
                // all games are winning

                ans += (a2 - a1 + 1);
            else {

                // When the thresholds intercept the (a1,a2) interval,
                // we have to explicitly count the # of winning games.

                ans += max(0.0, a2 - floor(golden * b));
                ans += max(0.0, ceil((golden - 1) * b) - a1);
            }
        }
        return  ans;
}
int main () {
    // ios::sync_with_stdio(false), cin.tie(nullptr);
    int t = 1; 
    cin >> t;
    for (int i = 1; i <= t; i++) {

        long long ans=fun();
        cout << "Case #" << i << ":" << ' ' << ans << '\n';
    }
}
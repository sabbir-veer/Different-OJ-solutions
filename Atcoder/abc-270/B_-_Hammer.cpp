#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, z, ans;
    cin >> x >> y >> z;
    if (x == 0)
        ans = 0;
    else if (x > 0) {
        if (y < x and y > 0) {
            if (z < y and z >= 0)
                ans = x;
            else if (z < 0)
                ans = abs(z) + (x - z);
            else if (z > y)
                ans = -1;
        } else
            ans = x;
    } else {
        if (y > x and y < 0) {
            if (z > y and z <= 0)
                ans = abs(x);
            else if (z > 0)
                ans = z + (z - x);
            else if (z < y)
                ans = -1;
        } else
            ans = abs(x);
    }
    cout << ans << endl;

    return 0;
}
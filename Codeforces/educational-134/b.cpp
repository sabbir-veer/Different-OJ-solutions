//Status: wrong answer
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;
    int dis = (n - sx) + (m - sy);
    int res = (n - 1) + (m - 1);
    if (dis <= d)
        cout << -1 << endl;
    else
        cout << res << endl;
}
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        /* code */
        solve();
    }
    return 0;
}

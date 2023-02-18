#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr << "_::DEBUG:: " << (#x) << " is " << x << endl
// #define boost
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr)

void solve() {
    string str = "atcoder";
    int l, r;
    cin >> l >> r;
    string res = str.substr(l - 1, r - l + 1);
    cout << res << endl;
}
int main() {
    // boost;
    // int tc;
    // cin >> tc;
    // while (tc--) {
    solve();
    // }

    return 0;
}
// Problem Status: AC
// #pragma GCC optimize("03")
#include <bits/stdc++.h>
using namespace std;

constexpr int INF{0x3f3f3f3f};  // 1e9
constexpr int MaxN = 1e9 + 7;
#define clr(x) memset(x, 0, sizeof(x))
#define mem(x) memset(x, -1, sizeof(x))
#define mems(x, ch) memset(x, ch, sizeof(ch))
#define int long long
#define watch(x) cerr << "_::DEBUG:: " << (#x) << " is " << x << endl
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define endl "\n"
bool isPrime(int n) {
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}
void solve() {
    int l, r;
    cin >> l >> r;
    int even = (r & 1) ? r - 1 : r;
    int a = 2, b = even - 2;

    if (l == r and l & 1) {
        for (int i = 3; i * i <= l; i += 2) {
            if (l % i == 0) {
                a = i, b = l - i;
                break;
            }
        }
    }
    if (r < 4)
        cout << -1 << endl;
    else if (l == r and isPrime(l))
        cout << -1 << endl;
    else
        cout << a << " " << b << endl;
}
int32_t main() {
    boost;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}

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

void solve() {
    int n;
    cin >> n;
    int di, si;
    int exceeds = MaxN;
    int k;
    while (n--) {
        /* code */
        cin >> di >> si;
        int extra = (si % 2 == 0) ? si / 2 - 1 : si / 2;
        // watch(extra);
        int current = di + extra;
        // watch(current);
        if (current <= exceeds) {
            exceeds = current;
            k = exceeds;
            // watch(k);
        }
    }
    cout << k << endl;
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

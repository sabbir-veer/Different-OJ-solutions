// Problem Status: AC/WA/TLE
// #pragma GCC optimize("03")
#include <bits/stdc++.h>
using namespace std;

constexpr int INF{0x3f3f3f3f}; // 1e9
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

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n], product = 1;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
        product *= arr[i];
    }
    double res = 2023.0 / product;
    if (product > 2023)
        cout << "NO" << endl;
    else if (res == floor(res))
    {
        cout << "YES\n"
             << res;
        for (size_t i = 0; i < k - 1; i++)
        {
            /* code */
            cout << " " << 1;
        }
        cout << endl;
    }
    else
        cout << "NO" << endl;
}
int32_t main()
{
    boost;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}

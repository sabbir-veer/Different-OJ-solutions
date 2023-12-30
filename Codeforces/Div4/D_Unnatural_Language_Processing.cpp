// Problem Status: AC
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
    int n;
    cin >> n;
    string str;
    cin >> str;
    string res = "";
    for (int i = n - 1; i > 0;)
    {
        if (str[i] == 'a' || str[i] == 'e')
        {
            res += str[i];
            res += str[i - 1];
            res += '.';
            i -= 2;
        }
        else
        {
            res += str[i];
            res += str[i - 1];
            res += str[i - 2];
            // watch(str[i - 2]);
            res += '.';
            i -= 3;
        }
    }
    res.erase(res.size() - 1);
    reverse(res.begin(), res.end());
    cout << res << endl;
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

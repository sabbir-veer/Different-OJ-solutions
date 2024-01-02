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
#define watch(x) cerr << "_::DEBUG:: " << (#x) << " is " << x << " ";
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n), updatedArr(n), prefix(n);
    map<int, int> mapi;
    mapi[0] = 1;
    bool flag = false;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
        if (i & 1)
            updatedArr[i] = arr[i] * -1;
        else
            updatedArr[i] = arr[i];
        if (i == 0)
            prefix[i] = updatedArr[i];
        else
            prefix[i] = prefix[i - 1] + updatedArr[i];
        mapi[prefix[i]]++;
    }
    for (const auto &x : mapi)
    {
        if (x.second > 1)
            flag = true;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    mapi.clear();
    prefix.clear();
    arr.clear();
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

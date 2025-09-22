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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool changed;
    do
    {
        changed = false;
        vector<vector<int>> newArr = arr;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int top = (i > 0) ? arr[i - 1][j] : 0;
                int left = (j > 0) ? arr[i][j - 1] : 0;
                int bottom = (i < n - 1) ? arr[i + 1][j] : 0;
                int right = (j < m - 1) ? arr[i][j + 1] : 0;

                int maxNeighber = max({top, left, bottom, right});
                // watch(arr[i][j]);
                // watch(maxNeighber);
                if (arr[i][j] > maxNeighber)
                {
                    newArr[i][j] = maxNeighber;
                    changed = true;
                    // watch(newArr[i][j]);
                }
            }
        }
        arr = newArr;
    } while (changed);

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
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

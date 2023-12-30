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

void checkLetter(string x)
{
    int cntA = 0, cntB = 0, cntC = 0, cntW = 0;
    for (char ch : x)
    {
        if (ch == 'A')
            cntA++;
        else if (ch == 'B')
            cntB++;
        else if (ch == 'C')
            cntC++;
        else
            cntW++;
    }
    if (cntW)
    {
        if (!cntA)
            cout << 'A' << endl;
        else if (!cntB)
            cout << 'B' << endl;
        else
            cout << 'C' << endl;
    }
}
void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    checkLetter(s1);
    checkLetter(s2);
    checkLetter(s3);
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

//#pragma GCC optimize("03")
#include <bits/stdc++.h>
using namespace std;

// constexpr double PI{acos(-1.0)};
constexpr int INF{0x3f3f3f3f};
constexpr int MaxN = 1e9 + 7;

#define lb(x, v) lower_bound(all(x), v)
#define ub(x, v) upper_bound(all(x), v)
#define present(c, x) (c.find(x) != c.end())
#define vpresent(v, x) (v.find(all(v), x) != v.end())
#define sortA(x) sort(all(x)) ss
#define sortD(x) sort(all(x), greater<int>())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define countDigit(n) floor(log10(n) + 1)
#define clr(x) memset(x, 0, sizeof(x))
#define mem(x) memset(x, -1, sizeof(x))
#define mems(x, ch) memset(x, ch, sizeof(ch))

#define tr(c, i) for (typeof(c.begin()) i = c.begin(); i != c.end(); i++)

#define watch(x) cerr << "_::DEBUG:: " << (#x) << " is " << x << endl
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = n; i >= 0; i--) {
        /* code */
        cout << i << endl;
    }

    return 0;
}

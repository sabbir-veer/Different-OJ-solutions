// 467B Status: AC
// #pragma GCC optimize("03")
#include <bits/stdc++.h>
using namespace std;

constexpr int INF{0x3f3f3f3f};
constexpr int MaxN = 1e9 + 7;
#define clr(x) memset(x, 0, sizeof(x))
#define mem(x) memset(x, -1, sizeof(x))
#define mems(x, ch) memset(x, ch, sizeof(ch))
#define int long long
#define watch(x) cerr << "_::DEBUG:: " << (#x) << " is " << x << endl
#define boost                                                                  \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);                                                            \
  cout.tie(nullptr)
#define endl "\n"

int32_t main() {
  boost;
  int n, m, k;
  cin >> n >> m >> k;

  vector<int> xi;
  for (int i = 0; i <= m; i++) {
    int a;
    cin >> a;
    xi.push_back(a);
  }
  int len = xi.size();
  int fedor = xi[len - 1];
  //   watch(fedor);
  int cntSetBits, friends = 0;
  for (int i = 0; i < len - 1; i++) {
    cntSetBits = (__builtin_popcount(fedor ^ xi[i]));
    if (cntSetBits <= k)
      friends++;
  }
  cout << friends << endl;

  return 0;
}

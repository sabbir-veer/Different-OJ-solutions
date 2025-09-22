// Problem Status: AC/WA/TLE
//  #pragma GCC optimize("03")
#include <bits/stdc++.h>
using namespace std;

constexpr int INF{0x3f3f3f3f}; // 1e9
constexpr int MaxN = 1e9 + 7;
#define clr(x) memset(x, 0, sizeof(x))
#define mem(x) memset(x, -1, sizeof(x))
#define mems(x, ch) memset(x, ch, sizeof(ch))
#define int long long
#define watch(x) cerr << "_::DEBUG:: " << (#x) << " is " << x << endl
#define boost                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);                 \
  cout.tie(nullptr)
#define endl "\n"

int32_t main()
{
  boost;

  int n, k;
  cin >> n >> k;
  vector<int> nums;
  for (size_t i = 0; i < n; i++)
  {
    /* code */
    int x;
    cin >> x;
    nums.push_back(x);
  }

  int i = 0, j = 0, cnt = 0, maxOne = 0;
  while (j < nums.size())
  {
    if (!k and !nums[j])
    {
      cnt--;
      watch(cnt);
      if (!nums[i])
      {
        k++;
      }
      cout << "i = " << i << endl;
      i++;
    }
    if (nums[j])
    {
      cnt++;
      j++;
      // cout << "cnt 1" << endl;
    }
    else if (!nums[j] and k)
    {
      cnt++;
      k--;
      j++;
      // cout << "cnt 2" << endl;
    }
    maxOne = max(cnt, maxOne);
    }
  cout << maxOne << endl;
  return 0;
}

//#pragma GCC optimize("03")
#include <bits/stdc++.h>
using namespace std;

constexpr int INF{0x3f3f3f3f};
constexpr int MaxN = 1e9 + 7;
#define clr(x) memset(x, 0, sizeof(x))
#define mem(x) memset(x, -1, sizeof(x))
#define mems(x, ch) memset(x, ch, sizeof(ch))
#define int long long
#define watch(x) cerr << "_::DEBUG:: " << (#x) << " is " << x << endl
#define boost ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl "\n"

int32_t main() {
    boost;
    
    int n, m;
    cin >> n >> m;
    vector<int> vati;
    for(int i=0; i<m ; i++) {
        int x;
        cin >> x;
        vati.push_back(x);
    }
    int pos = 1, time = 0;
    for(int i=0; i<m; i++) {
        if(vati[i] == pos) {
            continue;
        } else if(vati[i] > pos) {
            time += (vati[i] - pos); 
            pos = vati[i];
        } else {
            time += ((n-pos) + vati[i]);
            pos = vati[i];
        }
    }
    cout << time << endl;

    return 0;
}

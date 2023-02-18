// status: AC
#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr << "_::DEBUG:: " << (#x) << " is " << x << endl
void solve() {
    set<char> sati;
    string s1, s2;
    cin >> s1 >> s2;
    sati.insert(s1[0]);
    sati.insert(s1[1]);
    sati.insert(s2[0]);
    sati.insert(s2[1]);
    if (sati.size() == 1)
        cout << 0 << endl;
    else if (sati.size() == 2)
        cout << 1 << endl;
    else if (sati.size() == 3)
        cout << 2 << endl;
    else
        cout << 3 << endl;
}
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        /* code */
        solve();
    }
}

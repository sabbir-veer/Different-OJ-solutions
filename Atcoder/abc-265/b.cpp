#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr << "_::DEBUG:: " << (#x) << " is " << x << endl
int main() {
    int n, m, t;
    cin >> n >> m >> t;
    int a[n];
    for (int i = 0; i < n - 1; i++) {
        /* code */
        cin >> a[i];
    }

    int x[m];
    for (int i = 0; i < m; i++) {
        /* code */
        x[i] = 0;
    }

    watch(x[1]);
    for (int i = 0; i < m; i++) {
        /* code */
        int a, b;
        cin >> a >> b;
        x[a] = b;
    }
    bool pass = true;
    for (int i = 0; i < n - 1; i++) {
        /* code */
        if (t - a[i] <= 0) {
            pass = false;
            break;
        } else {
            t -= a[i];
//            if (x[i + 1]) {
//                t += x[i + 1];
//                watch(x[i + 1]);
//            }
        }
    }
    if (pass)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

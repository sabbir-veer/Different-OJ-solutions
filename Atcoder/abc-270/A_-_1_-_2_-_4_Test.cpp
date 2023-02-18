#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b;
    
    int a1, b1, a2, b2, a3, b3;
    a1 = b1 = a2 = b2 = a3 = b3 = 0;
    if (a >= 4) {
        a1 = 4;
        a -= 4;
        if (a == 3) {
            a2 = 2;
            a3 = 1;
        } else
            a2 = a;
    } else if (a == 3) {
        a1 = 2;
        a2 = 1;
    } else
        a1 = a;

    if (b >= 4) {
        b1 = 4;
        b -= 4;
        if (b == 3) {
            b2 = 2;
            b3 = 1;
        } else
            b2 = b;
    } else if (b == 3) {
        b1 = 2;
        b2 = 1;
    } else
        b1 = b;

    set<int> sati = {a1, a2, a3, b1, b2, b3};
    int sum = 0;
    for (auto i : sati)
        sum += i;
    cout << sum << endl;

    return 0;
}
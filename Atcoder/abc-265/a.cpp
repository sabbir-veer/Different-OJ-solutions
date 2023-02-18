#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, n, forx, fory;
    cin >> x >> y >> n;
    forx = n * x;
    fory = (n / 3) * y;
    fory += (n % 3) * x;

    if (fory < forx)
        cout << fory << endl;
    else
        cout << forx << endl;

    return 0;
}
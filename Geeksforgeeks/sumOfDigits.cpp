#include<bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    int sum = 0;
    while(x != 0) {
        sum += x%10;
        x /= 10;
    }
    cout << sum << endl;

    return 0;
}
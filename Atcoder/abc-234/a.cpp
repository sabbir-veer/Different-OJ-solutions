#include <bits/stdc++.h>
using namespace std;
int fun(int x)
{
    int res = x * x + 2 * x + 3;
    return res;
}
int main()
{
    int t;
    cin >> t;
    int churu = fun(fun(fun(t) + t) + fun(fun(t)));
    cout << churu << endl;

    return 0;
}

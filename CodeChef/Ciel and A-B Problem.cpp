#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a , b;
    cin >> a >> b;
    (a-b)%10 == 9 ? cout << (a-b)-1 << endl: cout << (a-b)+1 << endl;

    return 0;
}

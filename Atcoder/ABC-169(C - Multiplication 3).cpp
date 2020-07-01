#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, d;
    char ch;
    cin >> a >> b;
    cin >> ch >> d;
    b *= 100;
    b += d;
    long long mul = (a*b)/100;
    cout << mul << endl;
    return 0;

}

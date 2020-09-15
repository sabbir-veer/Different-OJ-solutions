#include<bits/stdc++.h>
using namespace std;
#define countDigit(n)   floor(log10(n)+1)
int main()
{
    long long k, bal;
    cin >> k;

    long long x = 7;
    for(int i=1; i<k+20; i++)
    {
        if(!(x%k))
        {
            cout << i << endl;
            return 0;
        }
        x %= k;
        x = x*10+7;
    }
    cout << -1 << endl;
    return 0;
}

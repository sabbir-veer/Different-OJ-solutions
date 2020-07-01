#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//typedef long long int lld;
int main()
{
    faster;
    int t, k, n;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int w[n], chef=0, son=0;
        for(int i=0; i<n; i++)
            cin >> w[i];
        sort(w,w+n);
        if(k>n/2)
            k = n-k;
        for(int i=0; i<n; i++)
        {
            if(i<k)
                son += w[i];
            else
                chef += w[i];
        }
        cout << chef - son << endl;
    }
    return 0;
}

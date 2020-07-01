#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long int lld;
int main()
{
    faster;
    lld t, n,i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        char ch[100000];
        cin >> ch;
        lld cnt=0;
        for(int i=0; ch[i]!='\0' ; i++)
        {
            if(ch[i] == '1')
                cnt++;
        }
        cout << (cnt*(cnt+1))/2 << endl;

    }
    return 0;
}

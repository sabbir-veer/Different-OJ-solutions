#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long int lld;
int main()
{
    faster;
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        lld s[n];
        for(int i=0; i<n; i++)
            cin >> s[i];
        lld diff[n], mini;
        for(int i=0; i<n-1; i++)
        {
            mini = fabs(s[i]-s[i+1]);
            for(int j=i+1; j<n; j++)
            {
                if(mini > fabs(s[i]-s[j])){
                    mini = fabs(s[i]-s[j]);
                    }
            }
            diff[i] = mini;
        }
        int smallest = diff[0];
        for(int i=0; i<n; i++)
        {
            if(smallest > diff[i])
                smallest = diff[i];
        }
        cout << smallest << endl;
    }

    return 0;
}

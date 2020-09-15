#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    long long cnt=0, maxi=max(v[0],v[1]);
    for(int i=1; i<n; i++){
        maxi = (v[i]>maxi) ? v[i] : maxi;
        if(v[i] >= v[i-1]) continue;
        else {
            cnt += (maxi-v[i]);
//            cout << cnt <<endl;
            v[i] = maxi;
        }
    }
    cout << cnt << endl;
    return 0;
}

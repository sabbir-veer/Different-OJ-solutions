#include<bits/stdc++.h>
using namespace std;
constexpr int mod = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    int ara[n+5];
    ara[0] = 0;
    for(int i=1; i<=n; i++) cin >> ara[i];
    long long c_sum[n+5], sum = 0;
    for(int i=1; i<=n; i++){
        sum += ara[i];
        sum %= mod;
        c_sum[i] = sum;
    }
    long long ans = 0;
    c_sum[0] = 0;
    for(int i=n; i>=1; i--){
        ans += (ara[i]*c_sum[i-1])%mod;
    }
    cout << ans%mod << endl;
    return 0;

}

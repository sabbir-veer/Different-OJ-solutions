#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int res = 1;
        if(n==1) res =0;

        for(int i = 2; i*i<=n ; i++){
            if(n%i == 0)
            {
                if(i*i == n) res += i;
                else res += (i+(n/i));
            }
        }
        cout << res << endl;
    }
    return 0;
}

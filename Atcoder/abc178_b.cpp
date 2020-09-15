#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c, d, x, y;
    cin >> a >> b >> c >> d;
    long long ara[5];
    ara[0] = a*c, ara[1] = a*d, ara[2] = b*c, ara[3] = b*d;
    long long maxi = ara[0];
    for(int i=0; i<4 ; i++){
        if(maxi < ara[i]) maxi = ara[i];
    }
    cout << maxi << endl;
    return 0;
}

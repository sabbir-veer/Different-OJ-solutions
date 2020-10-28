#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int cnt = 0;
        cnt += n/100;
        n %= 100;
        cnt += n/50;
        n %= 50;
        cnt += n/10;
        n %= 10;
        cnt += n/5;
        n %= 5;
        cnt += n/2;
        n %= 2;
        cnt += n;
        cout << cnt << endl;
    }
    return 0;
}

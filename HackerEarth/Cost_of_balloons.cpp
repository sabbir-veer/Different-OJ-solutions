#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int green, purple;
    cin >> green >> purple;
    int mini = green > purple ? purple : green;
    int maxi = green >= purple ? green : purple;
//    cout << "mini = " << mini << " max = " << maxi << endl;
    int n;
    cin >> n;
    int fi=0, sc=0;
    while(n--){
        int a, b;
        cin >> a >> b;
        if(a==1) fi++;
        if(b==1) sc++;
    }
//    cout << "fi = " << fi << " sc = " << sc << endl;
    int res = (fi<sc) ? ((sc*mini)+(fi*maxi)) : ((sc*maxi)+(fi*mini));
    cout << res << endl;
}
int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}

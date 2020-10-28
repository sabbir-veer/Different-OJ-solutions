#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        reverse(s.begin(),s.end());
        while(s[0] == '0'){
            s.erase(s.begin());
        }
        cout << s << endl;
    }
    return 0;
}

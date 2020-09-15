#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string str;
    cin >> str;
    long long sum = 0;
    for(int i=0; i< str.size() ; i++){
        sum += (str[i]-48);
    }
    if(sum % 9==0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

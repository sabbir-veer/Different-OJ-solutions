#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int cnt = 0;
    long long sum = 0;
    cin >> str;
    while(str.size() != 1){
        cnt++;
        for(int i=0; i<str.size(); i++){
            sum += str[i]-'0';
        }
        str = to_string(sum);
        sum = 0;
    }
    cout << cnt << endl;
    return 0;
}

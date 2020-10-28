#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    long long sum, maxi=0;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=0; j<n; j++){
            if(v[i] <= v[j])
                sum += v[i];
        }
        if(sum > maxi)
            maxi = sum;
    }
    cout << maxi << endl;
    return 0;
}


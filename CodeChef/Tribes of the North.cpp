#include<iostream>
using namespace std;
typedef long long int ll;
int main()
{
    int n, f;
    ll g, t, w, m = 0;

    cin >> n;
    while(n--){
        cin >> g >> t >>  w;
        if(g>t && g>w)
            m = g;
        else if(t>w) m = t;
        else m = w;
        f = m-1;
        if(f+1 == g)
        {
            if(t+w < f) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
        else if(f+1 == t){
            if(g+w < f) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
        else if(f+1 == w){
            if(g+t < f) cout << "No" << endl;
            else cout << "Yes" << endl;
        }

    }
    return 0;
}

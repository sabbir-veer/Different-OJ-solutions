/*
    name: sabbir ahmed
    Hajee Mohammad Danesh Science and Technology University,Dinajpur
*/
//#pragma GCC optimize("03")
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

using vi  = vector <int>;
using vii = vector <vi>;
using pii = pair <int,int>;
using vpi = vector <pii>;
using mis = map <int,string>;

constexpr double PI{acos(-1.0)};
constexpr int INF{0x3f3f3f3f};
constexpr int MAX = 2147483647;
constexpr int MOD = 1e9 + 7;

#define fi              first
#define sc              second
#define sf(a)           scanf("%d", &a);
#define sf2(a,b)        scanf("%d %d", &a, &b);
#define pYES            printf("YES\n");
#define pYes            printf("Yes\n");
#define pNO             printf("NO\n");
#define pNo             printf("No\n");

#define pb              push_back
#define ppb             pop_back
#define pf              push_front
#define ppf             pop_front
#define eb              emplace_back
#define all(x)          x.begin(),x.end()
#define mp              make_pair
#define mt              make_tuple

#define lb(x,v)         lower_bound(all(x),v)
#define ub(x,v)         upper_bound(all(x),v)
#define present(c,x)    (c.find(x) != c.end())
#define vpresent(v,x)   (v.find(all(v),x) != v.end())
#define sortA(x)        sort(all(x))
#define sortD(x)        sort(all(x),greater<int>())

#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*b)/gcd(a,b)
#define countDigit(n)   floor(log10(n)+1)
#define clr(x)          memset(x,0,sizeof(x))
#define mem(x)          memset(x,-1,sizeof(x))
#define mems(x,ch)      memset(x,ch,sizeof(ch))

#define rep(i,n)        for(size_t i=0; i<n; i++)
#define per(i,n)        for(size_t i=n-1; i>=0; i--)
#define arep(i,a,b)     for(size_t i=a; i<=b; i++)
#define tr(c,i)         for(typeof(c.begin()) i = c.begin(); i != c.end(); i++)

#define watch(x)        cerr << "_::DEBUG:: " << (#x) << " is " << x << endl
#define boost           ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
void lapindromes()
{
    string s;
    cin >> s;
    int sz = s.size();
    vector<int> v(sz);
   // watch(v[1]);
    int st = sz/2;
    int fn;
    if(sz%2==0)
        fn = st;
    else
        fn = st+1;
    bool dec;
    for(int i=0; i<st; i++){
        dec = false;
        for(int j=fn; j<s.size(); j++){
            if(s[i] == s[j] && v[j]==0){
                dec = true;
                v[j] = 1;
                break;
            }
        }
        if(!dec){
            cout << "NO" << endl;
            break;
        }
    }
    if(dec)
        cout << "YES" << endl;
    s.clear();
    v.clear();
}
int main()
{
    boost;
    int tc;
    cin >> tc;
    while(tc--){
        lapindromes();
    }

    return 0;
}



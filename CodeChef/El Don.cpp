//https://www.codechef.com/COTS2020/problems/CDCUR02
#include<iostream>
#include<cmath>
using namespace std;
long long int status[100000000001];
int main()
{
    int t;
    long long int x, y;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        long long int diff = x*x - y*y;

        int N=100000000000;
        int sq=sqrt(N);
        for(int i=4; i<=N; i+=2)
            status[i]=1;
        for(int i=3; i<=sq; i+=2)
        {
            if(status[i]==0)
            {
                for(int j=i*i; j<=N; j+=i)
                    status[j]=1;
            }
        }
        if(status[diff] == 0)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

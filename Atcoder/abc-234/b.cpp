#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vati;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        vati.push_back(make_pair(a, b));
    }
    double maxi = 0;
    for (size_t i = 0; i < n - 1; i++)
    {
        /* code */
        for (size_t j = 1; j < n; j++)
        {
            /* code */
            double ls = sqrt(pow((vati[j].first - vati[i].first), 2) + pow((vati[j].second - vati[i].second), 2));
            maxi = max(maxi, ls);
        }
    }
    cout << fixed << setprecision(10) << maxi << endl;

    return 0;
}

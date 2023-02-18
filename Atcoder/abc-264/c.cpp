#include <bits/stdc++.h>
using namespace std;
bool yesNo(vector<vector<int>> vati1, vector<vector<int>> vati2) {
    if (vati1.size() != vati2.size())
        return false;
    for (size_t i = 0; i < vati1.size(); i++) {
        if (vati1[i].size() != vati2[i].size())
            return false;
        for (size_t j = 0; j < vati1[i].size(); j++) {
            if (vati1[i][j] != vati2[i][j])
                return false;
        }
    }
    return true;
}
void solve() {
    int h1, w1, h2, w2;
    cin >> h1 >> w1;
    vector<vector<int>> vati1;
    for (size_t i = 0; i < h1; i++) {
        vector<int> row;
        for (size_t j = 0; j < w1; j++) {
            int x;
            cin >> x;
            row.push_back(x);
        }
        vati1.push_back(row);
    }
    cin >> h2 >> w2;
    vector<vector<int>> vati2;
    map<int, bool> mapi;
    for (size_t i = 0; i < h2; i++) {
        vector<int> row;
        for (size_t j = 0; j < w2; j++) {
            int x;
            cin >> x;
            row.push_back(x);
            mapi.insert({vati2[i][j], true});
        }
        vati2.push_back(row);
    }
    for (size_t i = 0; i < vati1.size(); i++) {
        bool ok = false;
        for (size_t j = 0; j < vati1[i].size(); j++) {
            if (mapi.at(vati1[i][j]))
                ok = true;
        }
        if (!ok) {
            vati1.erase(vati1.begin() + i);
        }
    }
    for (size_t j = 0; j < vati1.size(); j++) {
        bool ok = false;
        for (size_t i = 0; i < vati1[j].size(); i++) {
            if (mapi.at(vati1[i][j]))
                ok = true;
        }
        if (!ok) {
            for (size_t i = 0; i < vati1[j].size(); i++) {
                vati1[j].erase(vati1[j].begin() + i);
            }
        }
    }
    if (yesNo(vati1, vati2))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main() {
    solve();

    return 0;
}
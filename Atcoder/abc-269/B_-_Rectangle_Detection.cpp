#include <bits/stdc++.h>
using namespace std;
int main() {
    string str[10];
    int size = 10;
    for (size_t i = 0; i < size; i++) {
        /* code */
        cin >> str[i];
    }
    int a, b, c, d;
    bool flag_a = false, flag_b = false, flag_c = false, flag_d = false;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (str[i][j] == '#' and !flag_a) {
                a = i + 1;
                c = j + 1;
                flag_a = true;
                flag_c = true;
            }
            if (flag_a and flag_c and !flag_b and (str[j][i] == '.' || j == 9)) {
                if (j == 9 and str[j][i] == '#') {
                    cout << "here" << endl;
                    b = i + 1;
                } else {
                    b = i;
                }
                flag_b = true;
            }
            if (flag_c and !flag_d and (str[i][j] == '.' || j == 9)) {
                if (j == 9 and str[i][j] == '#')
                    d = j + 1;
                else
                    d = j;
                flag_d = true;
                break;
            }
        }
        if (flag_d)
            break;
    }
    cout << a << ' ' << b << endl
         << c << ' ' << d << endl;
}
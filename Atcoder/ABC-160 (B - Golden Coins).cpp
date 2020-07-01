#include <iostream>
using namespace std;
int main()
{
    long long int x, points;
    cin >> x;

    long long int a = x/500;
    points = a*1000;
    x = x-a*500;
    a = x/5;
    points = points + a*5;
    cout << points << endl;

    return 0;
}

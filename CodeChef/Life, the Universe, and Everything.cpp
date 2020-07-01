#include <iostream>
using namespace std;
int main()
{
    int x;
    while(1)
    {
        cin >> x;
        if(x!=42)
            cout << x << endl;
        else
            break;
    }
    return 0;

}

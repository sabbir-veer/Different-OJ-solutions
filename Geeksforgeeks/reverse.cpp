#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
int main()
{
    int tc, n;
    cin >> tc;
    while (tc--)
    {
        /* code */
        cin >> n;
        int arr[n];
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
        }
        reverseArray(arr, 0, n - 1);
        printArray(arr, n);
    }
    
    return 0;
}
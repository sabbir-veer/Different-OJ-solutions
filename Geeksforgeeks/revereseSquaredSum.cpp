#include<bits/stdc++.h>
using namespace std;
int reverseSquaredSum(int arr[], int start, int end, int n)
{
    int oddSum = 0, evenSum = 0;
    for (size_t i = 0; i < n; i+=2)
        oddSum += (arr[i]*arr[i]);
    for (size_t i = 1; i < n; i+=2)
        evenSum += (arr[i]*arr[i]);
    if(n%2) return oddSum-evenSum;
    else return evenSum - oddSum;
}
int main(){
    int tc, n;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        int arr[n];
        for (size_t i = 0; i < n; i++) cin >> arr[i] ;
        int val = reverseSquaredSum(arr, 0, n-1, n);
        cout << val << endl;
    }
    return 0;
}
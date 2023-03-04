// problem status AC
// link
// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  // arr: input array
  // n: size of array
  // Function to find the sum of contiguous subarray with maximum sum.
  long long maxSubarraySum(int arr[], int n) {

    // Your code here
    int maxSum = INT_MIN;
    int curSum = 0;
    for (int i = 0; i < n; i++) {
      curSum += arr[i];
      if (curSum > maxSum)
        maxSum = curSum;
      if (curSum < 0)
        curSum = 0;
    }
    return maxSum;
  }
};
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  Solution solve;
  long long ans = solve.maxSubarraySum(arr, n);
  cout << ans << endl;

  return 0;
}
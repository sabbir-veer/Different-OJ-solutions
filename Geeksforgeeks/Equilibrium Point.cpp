// problem status: AC
// link:
// https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

class Solution {
public:
  // Function to find equilibrium point in the array.
  // a: input array
  // n: size of array
  int equilibriumPoint(long long a[], int n) {
    if (n == 1)
      return 1;
    if (n == 2)
      return -1;
    long long pre[n + 1];
    for (int i = 0; i <= n; i++)
      pre[0] = 0;
    pre[1] = a[0];
    for (int i = 2; i <= n; i++)
      pre[i] = pre[i - 1] + a[i - 1];
    long long preSum, postSum;
    for (int i = 2; i < n; i++) {
      preSum = pre[i] - a[i - 1];
      postSum = pre[n] - pre[i];
      if (preSum == postSum)
        return i;
    }
    return -1;
  }
};

// problem status: AC
// link
// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

class Solution {
public:
  // Function to find a continuous sub-array which adds up to a given number.
  vector<int> subarraySum(vector<int> arr, int n, long long s) {
    // Your code here
    int current_sum = arr[0], left = 0, right = 0;
    if (current_sum == s)
      return {1, 1};
    while (right < n - 1) {
      if (current_sum + arr[right + 1] <= s) {
        current_sum += arr[right + 1];
        right++;
      } else {
        current_sum -= arr[left];
        left++;
      }
      if (current_sum == s and left <= right) {
        return {left + 1, right + 1};
      }
    }
    return {-1};
  }
};
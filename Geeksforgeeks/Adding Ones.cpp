// problem status: AC
// link: https://practice.geeksforgeeks.org/problems/adding-ones3628/1
class Solution {
public:
  void update(int a[], int n, int updates[], int k) {
    for (int i = 0; i < k; i++) {
      if (updates[i] <= n) {
        a[updates[i] - 1]++;
      }
    }
    for (int i = 1; i < n; i++) {
      a[i] += a[i - 1];
    }
  }
};
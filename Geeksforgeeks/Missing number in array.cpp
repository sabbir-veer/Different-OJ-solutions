// problem status AC
// link
// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

class Solution {
public:
  int MissingNumber(vector<int> &array, int n) {
    // Your code goes here
    long long sum = (n * (n + 1)) / 2;
    long long missingSum = 0;
    for (int i = 0; i < array.size(); i++) {
      missingSum += array[i];
    }
    return sum - missingSum;
  }
};
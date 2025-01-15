class Solution
{
public:
  int missingNumber(vector<int> &nums)
  {
    int n = nums.size();
    int num = n * (n + 1) / 2 - accumulate(nums.begin(), nums.end(), 0);
    return num;
  }
};
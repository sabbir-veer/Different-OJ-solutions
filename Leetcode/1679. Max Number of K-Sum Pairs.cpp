class Solution
{
public:
  int maxOperations(vector<int> &nums, int k)
  {
    int sum = 0, cnt = 0;
    sort(nums.begin(), nums.end());
    int l = 0, r = nums.size() - 1;
    while (l < r)
    {
      sum = nums[l] + nums[r];
      if (sum == k)
      {
        cnt++;
        l++;
        r--;
      }
      else if (sum > k)
        r--;
      else
        l++;
    }
    return cnt;
  }
};
class Solution
{
public:
  int maxFrequency(vector<int> &nums, int k)
  {
    sort(nums.begin(), nums.end());
    int left = 0, right = 0;
    long long sum = 0;
    int ans = 0;
    while (right < nums.size())
    {
      sum += nums[right];
      while ((long long)nums[right] * (right - left + 1) > sum + k)
      {
        sum -= nums[left];
        left++;
      }
      ans = max(ans, right - left + 1);
      right++;
    }
    return ans;
  }
};
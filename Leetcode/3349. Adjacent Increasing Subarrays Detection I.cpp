class Solution
{
public:
  bool hasIncreasingSubarrays(vector<int> &nums, int k)
  {
    int l = 0, r = 0, flag = 0, n = nums.size();
    if (k == 1)
      return true;
    while (r < n)
    {
      if (r - l + 1 >= 2 * k)
        return true;
      if (r + 1 < n && nums[r + 1] > nums[r])
        r++;
      else if (r + 1 < n && nums[r + 1] <= nums[r])
      {
        if (r - l + 1 >= k && flag < 1)
        {
          l = r - k + 1;
          r++;
          flag++;
        }
        else
        {
          l = r + 1;
          r++;
          flag = 0;
        }
      }
      else
        r++;
    }
    return false;
  }
};
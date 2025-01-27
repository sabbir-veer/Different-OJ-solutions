class Solution
{
public:
  int longestOnes(vector<int> &nums, int k)
  {
    int i = 0, j = 0, cnt = 0, maxOne = 0;
    while (j < nums.size())
    {
      if (k == 0 && nums[j] == 0)
      {
        cnt--;
        if (!nums[i])
        {
          k++;
        }
        i++;
      }
      if (nums[j])
      {
        cnt++;
        j++;
      }
      else if (nums[j] == 0 && k != 0)
      {
        cnt++;
        k--;
        j++;
      }
      maxOne = max(cnt, maxOne);
    }
    return maxOne;
  }
};
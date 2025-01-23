class Solution
{
public:
  void moveZeroes(vector<int> &nums)
  {
    int len = nums.size(), cnt = 0;
    for (int i = 0; i < len; i++)
    {
      while (nums[i] == 0 && i < len)
      {
        nums.erase(nums.begin() + i);
        nums.push_back(0);
        len--;
      }
    }
  }
};
class Solution
{
public:
  bool increasingTriplet(vector<int> &nums)
  {
    int a = nums[0], b = INT_MAX;
    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[i] > b)
      {
        return true;
      }
      if (nums[i] < a)
      {
        a = nums[i];
      }
      else if (nums[i] > a)
      {
        b = nums[i];
      }
    }
    return false;
  }
};
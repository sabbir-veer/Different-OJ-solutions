class Solution
{
public:
  int pivotIndex(vector<int> &nums)
  {
    int x = 0, len = nums.size();
    vector<int> arr(len);
    for (int i = 0; i < len; i++)
    {
      x += nums[i];
      arr[i] = x;
    }
    for (int i = 0; i < len; i++)
    {
      int left = arr[i] - nums[i];
      int right = arr[len - 1] - arr[i];
      if (left == right)
        return i;
    }
    return -1;
  }
};
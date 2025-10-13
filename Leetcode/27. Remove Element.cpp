class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {
    int left = 0, right = nums.size() - 1, n = nums.size();
    while (left < right)
    {
      while (left < n && nums[left] != val)
        left++;
      while (right >= 0 && nums[right] == val)
        right--;
      if (left < right && left < n && right >= 0)
      {
        swap(nums[left], nums[right]);
        left++;
        right--;
      }
    }
    int cnt = 0;
    for (int x : nums)
    {
      if (x != val)
        cnt++;
      if (x == val)
        break;
    }
    return cnt;
  }
};
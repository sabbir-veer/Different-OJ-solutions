class Solution
{
public:
  vector<int> productExceptSelf(vector<int> &nums)
  {
    vector<int> left;
    left.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
      left.push_back(nums[i] * left[i - 1]);
    }
    vector<int> answer(nums.size());
    int right = 1;
    for (int i = nums.size() - 1; i > 0; i--)
    {
      answer[i] = left[i - 1] * right;
      right *= nums[i];
    }
    answer[0] = right;
    return answer;
  }
};
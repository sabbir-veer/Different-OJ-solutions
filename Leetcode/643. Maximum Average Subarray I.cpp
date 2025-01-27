class Solution
{
public:
  double findMaxAverage(vector<int> &nums, int k)
  {
    int i = 0, j = 0, sum = 0;
    double avg, maxAvg = INT_MIN;
    while (j < nums.size())
    {
      if (j - i + 1 < k)
      {
        sum += nums[j];
        j++;
      }
      else if (j - i + 1 == k)
      {
        sum += nums[j];
        avg = sum / (double)k;
        maxAvg = max(avg, maxAvg);
        sum -= nums[i];
        i++;
        j++;
      }
    }
    return maxAvg;
  }
};
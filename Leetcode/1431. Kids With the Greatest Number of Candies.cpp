class Solution
{
public:
  vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
  {
    int maxi = *max_element(candies.begin(), candies.end());
    vector<bool> result;
    for (auto &candy : candies)
    {
      if (candy + extraCandies >= maxi)
        result.push_back(true);
      else
        result.push_back(false);
    }
    return result;
  }
};
class Solution
{
public:
  vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
  {
    sort(potions.begin(), potions.end());
    vector<int> successPairs;
    for (int i = 0; i < spells.size(); i++)
    {
      int left = 0, right = potions.size() - 1;
      int lastTrack = 0;
      bool successCheck = false;
      while (left <= right)
      {
        int mid = left + (right - left) / 2;
        if ((long long)spells[i] * potions[mid] >= success)
        {
          lastTrack = mid;
          right = mid - 1;
          successCheck = true;
        }
        else
        {
          left = mid + 1;
        }
      }
      if (successCheck)
      {
        successPairs.push_back(potions.size() - lastTrack);
      }
      else
        successPairs.push_back(0);
    }
    return successPairs;
  }
};
class Solution
{
public:
  int largestAltitude(vector<int> &gain)
  {
    int current = 0, maxi = 0;
    for (int i = 0; i < gain.size(); i++)
    {
      current += gain[i];
      maxi = max(maxi, current);
    }
    return maxi;
  }
};
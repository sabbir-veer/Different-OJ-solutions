class Solution
{
public:
  int maxScore(string s)
  {
    int totalOnes = 0, zerosCount = 0, onesCount = 0, bestCount = 0;
    for (auto &ch : s)
      if (ch == '1')
        totalOnes++;
    for (int i = 0; i < s.size() - 1; i++)
    {
      if (s[i] == '0')
        zerosCount++;
      else
        onesCount++;
      bestCount = max(zerosCount + (totalOnes - onesCount), bestCount);
    }
    return bestCount;
  }
};
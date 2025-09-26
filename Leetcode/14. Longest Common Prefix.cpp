class Solution
{
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    string res = "";
    if (strs.size() == 1)
      return strs[0];

    int j = 0, minLen = min(strs[1].size(), strs[0].size());
    while (j < minLen && strs[1][j] == strs[0][j])
    {
      res += strs[0][j];
      j++;
    }
    if (strs.size() == 2)
      return res;
    else
    {
      for (int i = 2; i < strs.size(); i++)
      {
        if (strs[i].size() == 0)
          return "";
        if (strs[i].size() < res.size())
        {
          res.erase(strs[i].size(), res.size() - strs[i].size());
        }
        for (int k = 0; k < strs[i].size(); k++)
        {
          if (strs[i][k] != res[k])
          {
            res.erase(k, res.size() - k);
            break;
          }
        }
      }
      return res;
    }
  }
};
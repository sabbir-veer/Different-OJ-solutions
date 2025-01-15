class Solution
{
public:
  string mergeAlternately(string word1, string word2)
  {
    string res = "";
    for (int i = 0; i < word1.size() && i < word2.size(); i++)
    {
      res += word1[i];
      res += word2[i];
    }
    if (word1.size() > word2.size())
    {
      res += word1.substr(word2.size());
    }
    else
      res += word2.substr(word1.size());
    return res;
  }
};
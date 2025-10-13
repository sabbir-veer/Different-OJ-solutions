class Solution
{
public:
  bool isAnagram(string s1, string s2)
  {
    if (s1.size() != s2.size())
      return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
  }
  vector<string> removeAnagrams(vector<string> &words)
  {
    if (words.size() == 0)
      return words;
    int i = 1, n = words.size();
    while (i < n)
    {
      if (isAnagram(words[i], words[i - 1]))
      {
        words.erase(words.begin() + i);
      }
      else
      {
        i++;
      }
      n = words.size();
    }
    return words;
  }
};
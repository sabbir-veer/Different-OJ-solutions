class Solution
{
public:
  string reverseWords(string s)
  {
    reverse(s.begin(), s.end());
    int i = 0;
    string word = "", res = "";
    while (i < s.size())
    {
      while (i < s.size() and s[i] == ' ')
        i++;
      if (i == s.size())
        break;
      while (i < s.size() and s[i] != ' ')
      {
        word += s[i];
        i++;
      }
      reverse(word.begin(), word.end());
      res += (word + " ");
      word = "";
    }
    res.erase(res.size() - 1, 1);
    return res;
  }
};
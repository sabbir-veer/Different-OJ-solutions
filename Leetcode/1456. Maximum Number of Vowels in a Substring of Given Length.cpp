class Solution
{
public:
  bool isVowel(char x)
  {
    string str = "aeiouAEIOU";
    return (str.find(x) != string::npos);
  }
  int maxVowels(string s, int k)
  {
    int i = 0, j = 0, maxVowel = 0, cnt = 0;
    while (j < s.size())
    {
      if (j - i + 1 < k)
      {
        if (isVowel(s[j]))
          cnt++;
        j++;
      }
      else if (j - i + 1 == k)
      {
        if (isVowel(s[j]))
          cnt++;
        maxVowel = max(cnt, maxVowel);
        if (isVowel(s[i]))
          cnt--;
        i++;
        j++;
      }
    }
    return maxVowel;
  }
};
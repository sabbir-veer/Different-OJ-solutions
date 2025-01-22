class Solution
{
public:
  int compress(vector<char> &chars)
  {
    vector<char> listi;
    listi.push_back(chars[0]);
    int len = 1;
    for (int i = 1; i < chars.size(); i++)
    {
      if (chars[i] == chars[i - 1])
      {
        len++;
      }
      else
      {
        if (len > 1)
        {
          string s = to_string(len);
          for (auto &ch : s)
          {
            listi.push_back(ch);
          }
          len = 1;
        }
        listi.push_back(chars[i]);
      }
    }
    if (len > 1)
    {
      string s = to_string(len);
      for (auto &ch : s)
      {
        listi.push_back(ch);
      }
    }
    chars = listi;
    return listi.size();
  }
};
class Solution
{
public:
  int myAtoi(string s)
  {
    int i = 0, n = s.size();
    while (i < n && s[i] == ' ')
      i++;
    int sign = 1;
    if (i < n && (s[i] == '-' || s[i] == '+'))
    {
      sign = s[i] == '-' ? -1 : 1;
      i++;
    }
    int num = 0;
    while (i < n && s[i] >= '0' && s[i] <= '9')
    {
      int digit = s[i] - '0';
      if (num > (INT_MAX - digit) / 10)
      {
        if (sign == -1)
          return INT_MIN;
        else
          return INT_MAX;
      }
      num = num * 10 + digit;
      i++;
    }
    return num * sign;
  }
};
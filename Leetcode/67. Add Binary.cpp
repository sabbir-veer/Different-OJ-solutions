class Solution
{
public:
  string addBinary(string a, string b)
  {
    int carry = 0, i = a.size() - 1, j = b.size() - 1, aa, bb;
    string res = "";
    while (i >= 0 || j >= 0 || carry)
    {
      aa = i >= 0 ? a[i] - '0' : 0;
      bb = j >= 0 ? b[j] - '0' : 0;
      int sum = aa + bb + carry;
      carry = sum / 2;
      res += (sum % 2) + '0';
      i--;
      j--;
    }
    reverse(res.begin(), res.end());
    return res;
  }
};
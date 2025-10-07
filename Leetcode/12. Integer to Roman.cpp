class Solution
{
public:
  map<int, string> roman = {
      {1, "I"},
      {4, "IV"},
      {5, "V"},
      {9, "IX"},
      {10, "X"},
      {40, "XL"},
      {50, "L"},
      {90, "XC"},
      {100, "C"},
      {400, "CD"},
      {500, "D"},
      {900, "CM"},
      {1000, "M"}};
  map<int, string> singleRoman = {
      {2, "II"},
      {3, "III"},
      {6, "VI"},
      {7, "VII"},
      {8, "VIII"}};
  string getRoman(int x)
  {
    if (roman.find(x) != roman.end())
    {
      return roman[x];
    }
    else
    {
      string str = "";
      while (x >= 1000)
      {
        str += "M";
        x -= 1000;
      }
      if (x >= 500)
      {
        str += "D";
        x -= 500;
      }
      while (x >= 100)
      {
        str += "C";
        x -= 100;
      }
      if (x >= 50)
      {
        str += "L";
        x -= 50;
      }
      while (x >= 10)
      {
        str += "X";
        x -= 10;
      }
      if (x)
      {
        str += singleRoman[x];
      }
      return str;
    }
  }
  string intToRoman(int num)
  {
    vector<int> vati;
    int pos = 1;
    while (num != 0)
    {
      int x = num % 10;
      vati.push_back(x * pos);
      pos *= 10;
      num /= 10;
    }
    reverse(vati.begin(), vati.end());
    string res = "";
    for (int i = 0; i < vati.size(); i++)
    {
      res += getRoman(vati[i]);
    }
    return res;
  }
};
class Solution
{
public:
  bool isValid(string s)
  {
    stack<char> st;
    map<char, char> mp = {{')', '('}, {'}', '{'}, {']', '['}};
    for (char ch : s)
    {
      if (ch == '(' || ch == '{' || ch == '[')
      {
        st.push(ch);
      }
      else
      {
        if (st.empty())
          return false;
        if (st.top() != mp[ch])
          return false;
        st.pop();
      }
    }
    return st.empty();
  }
};
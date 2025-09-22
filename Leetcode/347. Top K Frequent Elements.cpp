class Solution
{
public:
  vector<int> topKFrequent(vector<int> &nums, int k)
  {
    map<int, int> mapi;
    for (int i = 0; i < nums.size(); i++)
    {
      mapi[nums[i]]++;
    }
    vector<pair<int, int>> vati(mapi.begin(), mapi.end());
    sort(vati.begin(), vati.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second > b.second; });
    vector<int> res;
    for (auto &p : vati)
    {
      if (k == 0)
        break;
      res.push_back(p.first);
      k--;
    }
    return res;
  }
};
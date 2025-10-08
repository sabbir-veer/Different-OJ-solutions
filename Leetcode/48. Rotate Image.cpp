class Solution
{
public:
  void rotate(vector<vector<int>> &matrix)
  {
    reverse(matrix.begin(), matrix.end());
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < m; j++)
      {
        swap(matrix[i][j], matrix[j][i]);
      }
    }
  }
};
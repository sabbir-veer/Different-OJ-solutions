class Solution
{
public:
  double checkArea(vector<int> &x, vector<int> &y, vector<int> &z)
  {
    double area = 0.5 * abs(x[0] * (y[1] - z[1]) + y[0] * (z[1] - x[1]) + z[0] * (x[1] - y[1]));
    return area;
  }
  double largestTriangleArea(vector<vector<int>> &points)
  {
    double res = 0.0;
    for (int i = 0; i < points.size(); i++)
    {
      for (int j = i + 1; j < points.size(); j++)
      {
        for (int k = j + 1; k < points.size(); k++)
        {
          double area = checkArea(points[i], points[j], points[k]);
          res = max(res, area);
        }
      }
    }
    return res;
  }
};
class Solution
{
public:
  bool canPlaceFlowers(vector<int> &flowerbed, int n)
  {
    int plantable = 0;
    if (flowerbed.size() == 1 and flowerbed[0] == 0)
      plantable = 1;
    else
    {
      for (int i = 0; i < flowerbed.size(); i++)
      {
        if (i == 0 and flowerbed[0] == 0 and flowerbed[1] == 0)
        {
          flowerbed[0] = 1;
          plantable++;
        }
        else if (i != 0 and i < flowerbed.size() - 1 and flowerbed[i] == 0 and flowerbed[i - 1] == 0 and flowerbed[i + 1] == 0)
        {
          flowerbed[i] = 1;
          plantable++;
        }
        else if (i == flowerbed.size() - 1 and flowerbed[i] == 0 and flowerbed[i - 1] == 0)
        {
          flowerbed[i] = 1;
          plantable++;
        }
      }
    }
    if (n <= plantable)
      return true;
    else
      return false;
  }
};
class Solution
{
public:
  int maxBottlesDrunk(int numBottles, int numExchange)
  {
    int cnt = numBottles, fullBottles = 0, emptyBottles = numBottles;
    while (emptyBottles >= numExchange)
    {
      while (emptyBottles >= numExchange)
      {
        fullBottles++;
        emptyBottles -= numExchange;
        numExchange++;
      }
      cnt += fullBottles;
      emptyBottles += fullBottles;
      fullBottles = 0;
    }
    return cnt;
  }
};
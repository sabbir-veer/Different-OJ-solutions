class Solution
{
public:
  int numWaterBottles(int numBottles, int numExchange)
  {
    int cnt = numBottles;
    while (numBottles >= numExchange)
    {
      cnt += (numBottles / numExchange);
      int remainder = numBottles % numExchange;
      numBottles /= numExchange;
      numBottles += remainder;
    }
    return cnt;
  }
};
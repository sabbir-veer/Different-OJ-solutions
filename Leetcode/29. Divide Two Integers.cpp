class Solution
{
public:
  int divide(int dividend, int divisor)
  {
    int dividendSign = dividend >= 0 ? 1 : -1;
    long long dividendCopy = dividendSign == 1 ? dividend : (long long)dividend * (-1);
    int divisorSign = divisor >= 0 ? 1 : -1;
    long long divisorCopy = divisorSign == 1 ? divisor : (long long)divisor * (-1);

    long long cnt = 0;
    while (dividendCopy >= divisorCopy)
    {
      long long temp = divisorCopy, multiple = 1;
      while (dividendCopy >= (temp << 1))
      {
        temp <<= 1;     // temp = divisor * 2, 4, 8, 16, ...
        multiple <<= 1; // multiple = 1, 2, 4, 8, 16...
      }
      dividendCopy -= temp;
      cnt += multiple;
    }
    if (dividendSign * divisorSign == 1 && cnt == 2147483648)
      cnt--;
    return cnt * dividendSign * divisorSign;
  }
};
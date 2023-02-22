// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int isPalindrome(string S)
    {
        // Your code goes here
        int l = 0;
        int h = S.length() - 1;
        while (l < h)
        {
            if (S[l++] != S[h--])
            {
                return 0;
            }
        }
        return 1;
    }
};

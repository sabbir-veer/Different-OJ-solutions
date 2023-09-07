class Solution {
   public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string check = str;
        int n = str.length();
        for (int i = 0; i < n / 2; i++) {
            swap(check[i], check[n - i - 1]);
        }
        if (str == check)
            return true;
        else
            return false;
    }
};
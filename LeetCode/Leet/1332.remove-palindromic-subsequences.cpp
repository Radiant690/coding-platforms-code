/*
 * @lc app=leetcode id=1332 lang=cpp
 *
 * [1332] Remove Palindromic Subsequences
 */

// @lc code=start
class Solution
{
public:
    int removePalindromeSub(string s)
    {
        int l = 0;
        int r = s.size() - 1;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                return 2; // if the string is not a palindrome
            }
        }
        return 1; // if the string is a palindrome
    }
};
// @lc code=end


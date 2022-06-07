/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> sums;
        int res = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            res = res + nums[i];
            sums.push_back(res);
        }
        return sums;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */

// @lc code=start
class Solution
{
public:
    void dfs(vector<vector<int>> &image, int sr, int sc, int newColor, int rows, int cols, int source)
    {
        // checking the boundaries 
        if (sr < 0 || sr >= rows || sc < 0 || sc >= cols)
            return;
        // checking if the image and source doesnt match (given that they need to be same)
        else if (image[sr][sc] != source)
            return;
        image[sr][sc] = newColor;
        dfs(image, sr - 1, sc, newColor, rows, cols, source); // up
        dfs(image, sr + 1, sc, newColor, rows, cols, source); // down
        dfs(image, sr, sc - 1, newColor, rows, cols, source); // left
        dfs(image, sr, sc + 1, newColor, rows, cols, source); // right
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        // simply return the original image without any changes if the newColor is equal to image[sc][sr]
        if (newColor == image[sr][sc])
            return image;
        int rows = image.size();
        int cols = image[0].size();
        int source = image[sr][sc];

        dfs(image, sr, sc, newColor, rows, cols, source);
        return image;
    }
};
// @lc code=end

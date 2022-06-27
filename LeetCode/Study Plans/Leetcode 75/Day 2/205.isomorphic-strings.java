import java.util.Arrays;

/*
 * @lc app=leetcode id=205 lang=java
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
    public boolean isIsomorphic(String s, String t) {
        int[] mappingStoT = new int[256];
        Arrays.fill(mappingStoT, -1);
        int[] mappingTtoS = new int[256];
        Arrays.fill(mappingTtoS, -1);

        for (int i = 0; i < s.length(); ++i) {
            char c1 = s.charAt(i);
            char c2 = t.charAt(i);

            if (mappingStoT[c1] == -1 && mappingTtoS[c2] == -1) {
                mappingStoT[c1] = c2;
                mappingTtoS[c2] = c1;
            } else if (!(mappingStoT[c1] == c2 && mappingTtoS[c2] == c1)) {
                return false;
            }
        }
        return true;
    }
}
// @lc code=end

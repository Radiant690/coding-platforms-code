class Solution {
  public:
  int search(vector<int>& nums, int target) {
    int mid, start = 0, end = nums.size() - 1;
    while (start <= end) {
      mid = start + (end - start) / 2;
    // Here to make operations faster we can evaluate mid = (start + end) >>> 1;
      if (nums[mid] == target) return mid;
      if (target < nums[mid]) end = mid - 1;
      else start = mid + 1;
    }
    return -1;
  }
};
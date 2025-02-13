class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target)
                return mid;  // Target found, return index
            
            if (nums[mid] < target)
                left = mid + 1;  // Move to the right half
            else
                right = mid - 1; // Move to the left half
        }
        
        return left;  // Left will be the insert position
    }
};

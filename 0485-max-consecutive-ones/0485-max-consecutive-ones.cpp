class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int count = 0;
        
        // Loop through the entire array starting from the first element
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                // Increment count if the current element is 1
                count++;
            } else {
                // If it's 0, update maxCount and reset current streak
                maxCount = max(maxCount, count);
                count = 0;
            }
        }
        
        // Final check in case the array ends with a streak of 1s
        return max(maxCount, count);
    }
};
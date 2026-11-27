class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0; // Pointer for the next even number's position
        
        // Iterate through the array
        for (int j = 0; j < nums.size(); j++) {
            // If the current element is even
            if (nums[j] % 2 == 0) {
                // Swap it with the element at pointer i
                swap(nums[i], nums[j]);
                i++; // Increment i to prepare for the next even number
            }
        }
        
        return nums;
        
    }
};
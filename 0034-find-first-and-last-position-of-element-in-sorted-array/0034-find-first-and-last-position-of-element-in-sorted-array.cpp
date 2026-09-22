class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int n= nums.size();
        int s=-1;
        int e=-1;
        int low = 0;
        int high = n-1;
        
        while (low <=high) {
            int mid = low + (high-low)/2;
            
            if (nums[mid]==target) {
                high = mid-1;
                s=mid;
                
            }
            
            else if(nums[mid]>target) {
                high =mid-1;
                
            }
            else {
                low = mid+1;
                
                }
            }
            
            low =0;
            high = n-1;
            
            while (low<=high) {
                int mid = low +(high-low)/2;
                
                if (nums[mid]==target) {
                    low = mid+1;
                    e=mid;
                    
                }
                else if(nums[mid]>target) {
                    high = mid-1;
                }
                else {
                    low = mid +1;
                }
            }
            
        
            return {s,e};
    }
};
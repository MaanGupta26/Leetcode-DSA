class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        

        for (int row = 0; row < m; row++) {
            int low = 0;
            int high = n - 1;
            
            while (low <= high) {
                int mid = low + (high - low) / 2;
                
                if (matrix[row][mid] == target) {
                    return true;
                } 
                else if (matrix[row][mid] < target) {
                    low = mid + 1;
                } 
                else {
                    high = mid - 1;
                }
            }
        }
        
        return false;
    }
};
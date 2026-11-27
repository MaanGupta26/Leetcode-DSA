class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i = 0, n = arr.size();
        //keep moving till array is increasing
        while (i + 1 < n && arr[i] < arr[i + 1])
            i++;
        if (i == 0 || i == n - 1)
            return false;
        //keep moving till array is decreasing 
        while (i + 1 < n && arr[i] > arr[i + 1])
            i++;
        if (i != n - 1)
            return false;
        return true;
    }
};
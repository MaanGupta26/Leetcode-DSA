class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
	{
        stack<int> hello;
        vector<int> ans (1,-1); 
        hello.push(arr[arr.size()-1]); 
        for (int i=arr.size()-2; i>=0 ; i--) 
        {
            ans.push_back(hello.top());
            if (hello.top()<arr[i]) 
                hello.push(arr[i]); 
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
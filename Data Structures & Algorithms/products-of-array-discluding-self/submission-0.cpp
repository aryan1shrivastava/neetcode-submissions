class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        // ans array
        vector<int> ans(n, 1);
        int prod = 1;
        
        //left prod array
        vector<int> left(n, 1);
        for(int i=1; i<n; i++){
            left[i] = nums[i-1] * left[i-1];
        }

        //right propduct array
        vector<int> right(n,1);
        for(int i=n-2; i>=0; i--){
            right[i] = nums[i+1] * right[i+1];
        }

        //combined array
        for(int i=0; i<n; i++){
            ans[i] = left[i] * right[i];
        }

        return ans;
    }
};

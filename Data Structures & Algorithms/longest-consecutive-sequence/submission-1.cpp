class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;

        unordered_set<int> st(nums.begin(), nums.end());

        for(int num: nums){
            if(st.find(num-1) == st.end()){
                int length = 1;
                while(st.find(num+length) != st.end()){
                    length++;
                }
                res = max(res, length);
            }
        }

        return res;
    }
};

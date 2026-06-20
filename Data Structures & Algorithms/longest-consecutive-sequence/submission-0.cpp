class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;

        unordered_set<int> st(nums.begin(), nums.end());

        for(int num: nums){
            int streak= 0, curr = num;

            while(st.find(curr) != st.end()){
                streak++;
                curr += 1;
            }
            res = max(streak, res);
        }

        return res;
    }
};

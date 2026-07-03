class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;

        int n = heights.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int area = (j - i) * min(heights[i], heights[j]);
                res = max(res, area);
            }
        }
        return res;
    }
};

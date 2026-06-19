class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //input all number sin a map to get there freq.
        unordered_map<int,int> mp;

        for(auto it: nums){
            mp[it]++;
        }

        //create a priority queue get elemtsn sorted by freq.

        priority_queue<pair<int,int>> pq;

        for(auto it: mp){
            pq.push({it.second, it.first});
        }

        //create an ans array and push the top k elements from the pq
        vector<int> ans;

        for(int i=0; i<k; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};

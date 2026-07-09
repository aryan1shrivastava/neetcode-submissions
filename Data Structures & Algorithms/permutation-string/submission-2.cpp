class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end());
        int m = s1.size();

        for(int i=0; i+m <=s2.size(); i++){
                string sub = s2.substr(i, m);
                sort(sub.begin(), sub.end());

                if(sub == s1) return true;           
        }
        return false;
    }
};

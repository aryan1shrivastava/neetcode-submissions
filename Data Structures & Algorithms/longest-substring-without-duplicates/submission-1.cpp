class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        int hashlen = 256;
        int hash[hashlen];

        for(int i=0; i<hashlen; i++){
            hash[i] = -1;
        }

        int l=0, r=0, maxlen=0;

        while(r < n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >= l){ // checking whther the duplicate is in the window or not, as only the elements on the right of l and left of r will be in window
                    l = hash[s[r]] +1;
                }
            }

            int len = r-l+1;
            maxlen = max(len, maxlen);

            hash[s[r]] =r;
            r++;
        }
        return maxlen;
    }
};

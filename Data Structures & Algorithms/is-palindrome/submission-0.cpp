class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();

        int i= 0; 
        int j=n-1;

        string str = "";

        for(auto it: s){
            if(isalnum(it)){
                str += tolower(it);
            }
            
        }
        cout<<str;
        string newstr = string(str.rbegin(), str.rend());
        if(newstr != str)return false;
        return true;
    }
};

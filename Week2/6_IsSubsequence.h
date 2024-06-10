class Solution {
    private:
        bool isSub(string s, int s_l, string t, int i){
            if (i == s_l) return true;
            else if(t.find(s[i]) != string::npos && i < s_l) return isSub(s, s_l, t.substr(t.find(s[i])+1), i + 1);
            else return false;
        }

    public:
        bool isSubsequence(string s, string t) {
            int s_l = s.size();
            return isSub(s, s_l, t, 0);
        }
};
// https://leetcode.com/problems/is-subsequence/?envType=study-plan-v2&envId=leetcode-75

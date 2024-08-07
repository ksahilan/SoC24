class Solution {
public:
    int numDistinct(string s, string t) {
        int l_s = s.size(), l_t = t.size();
        vector <double> hist(l_t+1,0);
        hist[0]=1;
        for(int i=1; i <= l_s; i++){
            for(int j=l_t; j>=1; j--){
                if(s[i-1] == t[j-1]){
                    hist[j] += hist[j-1];
                }
            }
        }
        return (int)hist[l_t];
    }
};
//https://leetcode.com/problems/distinct-subsequences/description/?envType=study-plan-v2&envId=dynamic-programming

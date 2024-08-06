class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries){
        
        sort(nums.begin(), nums.end());
        int m = queries.size(), n = nums.size();
        vector<int> answer = {};

        for(int j = 1; j<n; j++){
            nums[j] += nums[j-1];
        }
        
        for(int x: queries){
            if(x < nums[0]){
                answer.push_back(0);
            }
            else if(x >= nums.back()){
                answer.push_back(n);
            }
            else{
                answer.push_back(upper_bound(nums.begin(), nums.end(), x) - nums.begin());
            }
        }
        return answer;    
    }
};
// https://leetcode.com/problems/longest-subsequence-with-limited-sum/description/

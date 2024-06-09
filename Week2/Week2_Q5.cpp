class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int dis = 0;
        for(auto x : nums){                    // for loop
            dis = dis^x
        }
        return dis;
    }
};

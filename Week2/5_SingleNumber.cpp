class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int dis = 0;
        for(auto x : nums){                    // for loop
            dis = dis^x                        // A^B^C^B^A^D^E^E^D = C : a property of XOR
        }
        return dis;
    }
};

//https://leetcode.com/problems/single-number/description/?envType=study-plan-v2

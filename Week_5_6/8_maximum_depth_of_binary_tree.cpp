class Solution {
public:
    int maxDepth(TreeNode* root) {
        int l_r = 0, l_l = l_r;
        
        TreeNode* temp = root;
        while(true){
           if(temp == NULL) break;
           else{
            temp = temp->left;
            l_l++;
           }
        }
        
        temp = root;
        while(true){
            if(temp == NULL) break;
           else{
            temp = temp->right;
            l_r++;
           }
        }
        return max(l_l, l_r);
    }
};

// https://leetcode.com/problems/maximum-depth-of-binary-tree/description/?envType=study-plan-v2&envId=leetcode-75

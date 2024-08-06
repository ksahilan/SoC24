class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        int arr[row][col];
        int ans = 0;
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                int p;
                if(matrix[i][j] == '1') p = 1;
                else p = 0;
                if(i*j == 0) arr[i][j] = p;
                else{
                    arr[i][j] = (min({arr[i-1][j-1], arr[i-1][j], arr[i][j-1]}) + 1)*p;
                }
                ans = max(ans, arr[i][j]);
            }
        }
        return ans*ans;
    }
};

//https://leetcode.com/problems/maximal-square

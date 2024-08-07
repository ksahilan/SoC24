class Solution:
    def candy(self, ratings: List[int]) -> int:
        n = len(ratings)
        candies = [1]*n
        
        for i in range(n):
            if (i == 0):
                candies[i] = 1;
            elif(ratings[i] > ratings[i-1]):
                candies[i] = candies[i-1] + 1
            else: candies[i] = 1
        
        for i in range(n-1,0,-1):
            if(ratings[i-1] > ratings[i]):
                candies[i-1] = max(candies[i-1], candies[i]+1)
        return sum(candies)

        // https://leetcode.com/problems/candy/

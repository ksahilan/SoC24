/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long int a = 1, b = n;
        while(a <= b){
            long int k = (a+b)/2;
            if(guess(k)==-1){
                b = k-1;
            }
            else if(guess(k)==1){
                a = k+1;
            }
            else break;
        }     
        return (a+b)/2;
    }
};

class Solution {
    private:
    bool isVowel(char c){
        return ( c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u');
    }

    public:
        int maxVowels(string s, int k) {
            
            int count = 0, best = 0;

            for(int i = 0; i < s.size(); i++){
                
                if (isVowel(s[i])) count++;
                if(i>=k && isVowel(s[i-k])) count--;
                best = max(best, count);
            }

            return best;
        }
};
//https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/?envType=study-plan-v2&envId=leetcode-75

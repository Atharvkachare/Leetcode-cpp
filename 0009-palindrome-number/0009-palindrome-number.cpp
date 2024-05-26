class Solution {
public:
    bool isPalindrome(int x) {
         if(x < 0 || (x != 0 && x%10 == 0)) return false;
        
        int reverted = 0;
        //construct reverted number of last half of x
        //do until reverted >= x
        while(x > reverted){
            reverted = reverted*10 + x%10;
            x/=10;
        }
        
        //if x has odd digits, 
        //we need to use /10 to get rid of the middle digit
        //(which is last digit in reverted)
        return x==reverted || x==reverted/10;
        
    }
};
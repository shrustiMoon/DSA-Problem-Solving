class Solution {
public:
    bool isPalindrome(int x) {
        int originalnum = x;
        long reversenum = 0;
        while(x>0){
            int ld = x % 10;
            reversenum = (reversenum*10)+ld;
            x = x / 10;
        }
        if(reversenum==originalnum){
            return true;
        }
        else{
            return false;
        }
    }
};
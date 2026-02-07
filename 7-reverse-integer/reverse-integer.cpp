class Solution {
public:
    int reverse(int x) {
        long reversenum = 0;
        while(x!=0){
            int ld = x % 10;
            reversenum = (reversenum*10)+ld;
            x = x / 10;
        }
        if(reversenum>INT_MAX||reversenum<INT_MIN){
            return 0;
        }
        else{
            return (int)reversenum;
        }
    }
};
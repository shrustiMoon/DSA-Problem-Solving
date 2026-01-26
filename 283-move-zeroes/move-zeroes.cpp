class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //Finding the first zero
        int j = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) return;
        //Swaping the 0's to move to end
        for(int i=j+1; i<nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
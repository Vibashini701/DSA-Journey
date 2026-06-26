class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int anchor = 0;
        for(int explorer=0;explorer<n;explorer++){
            if(nums[explorer]!=0){
                swap(nums[anchor],nums[explorer]);
                anchor++;
            }
        }
    }
};
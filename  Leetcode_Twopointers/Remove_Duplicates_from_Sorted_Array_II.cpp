class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int left = 2;
        if(n<=2){
            return nums.size();
        }
        for(int i=2;i<n;i++){
            if(nums[i]!=nums[left-2]){
                nums[left] = nums[i];
                left++;
            }
        }
        return left;
    }
};
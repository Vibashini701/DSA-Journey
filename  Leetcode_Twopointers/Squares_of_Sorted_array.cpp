class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int left = 0;
        int right = nums.size() - 1;
        int p = nums.size() - 1;
        while(left <= right){
            int left_sqr = nums[left]*nums[left];
            int right_sqr = nums[right]*nums[right];
            if(left_sqr > right_sqr){
                result[p] = left_sqr;
                left++;
            }
            else{
                result[p] = right_sqr;
                right--;
            }
            p--;
        }
        return result;
    }
};
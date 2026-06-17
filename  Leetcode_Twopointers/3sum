class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int len = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<len;i++){
            if(nums[i]>0){
                break;
            }
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int left = i + 1;
            int right = len - 1;
            while(left<right){
                int sum = nums[i] + nums[right] + nums[left];
                if(sum==0){
                    result.push_back({nums[i],nums[right],nums[left]});
                    left++;
                    right--;
                    while(left<right&&nums[left]==nums[left-1]){
                        left++;
                    }
                    while(left<right&&nums[right]==nums[right+1]){
                        right--;
                    }
                }
                else if(sum<0){
                    left++;
                }
                else{
                    right--;
                }

            }

        }
        return result;
    }
};
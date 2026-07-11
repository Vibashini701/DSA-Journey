class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        std::unordered_map<int,int> sumMap;
        int maxlen = 0;
        int runingSum = 0;
        sumMap[0] = -1;
        for(int i=0;i<nums.size();i++){
            runingSum += (nums[i]==0) ? -1 : 1;
            if(sumMap.find(runingSum) != sumMap.end()){
                int currlen = i - sumMap[runingSum];
                maxlen = std::max(maxlen,currlen);               
            }
            else{
                sumMap[runingSum] = i;
            }
        }
    return maxlen;

    }
};
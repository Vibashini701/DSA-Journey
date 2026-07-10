class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        std::unordered_map<int,int> prefix_counts;
        prefix_counts[0] = 1;
        int current_sum = 0;
        int count = 0;
        for(int num : nums){
            current_sum = current_sum + num;
        int target = current_sum - k;
        if(prefix_counts.find(target) != prefix_counts.end()){
            count = count + prefix_counts[target];
        }
        prefix_counts[current_sum]++;
        }
    return count;
    }
};
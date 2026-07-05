class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> counts;
        for(int num : nums){
            counts[num]++;
        }
        std::priority_queue<std::pair<int,int>> max_heap;
        for(auto const& [num,freq] : counts){
            max_heap.push({freq,num});
        }
        std::vector<int> result;
        while(k>0 && !max_heap.empty()){
            int top_num = max_heap.top().second;
            result.push_back(top_num);
            max_heap.pop();
            k--;
        }
        return result;
    }
};
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> result;
        int i=0;
        int j=0;
        int N = firstList.size();
        int M = secondList.size();
        while(i<N && j<M){
            int start = std::max(firstList[i][0],secondList[j][0]);
            int end = std::min(firstList[i][1],secondList[j][1]);
            if(start<=end){
                result.push_back({start,end});
            }
            if(firstList[i][1]<secondList[j][1]){
                i++;
            }
            else{
                j++;
            }
        }
        return result;
    }
};
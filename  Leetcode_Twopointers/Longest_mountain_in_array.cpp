class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int max_mountain = 0;
        for(int i=1;i<=n-2;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                int left = i;
                int right = i;
                while(left>0 && arr[left-1]<arr[left]){
                    left--;
                }
                while(right<n-1 && arr[right+1]<arr[right]){
                    right++;
                }
                int current_lenth = right - left +1;
                max_mountain = max(max_mountain,current_lenth);
                i = right;
            }
        }
        return max_mountain;
    }
};

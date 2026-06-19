class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int max_water = 0;
        while(left<right){
            int width = right - left;
            int current_water = width*min(height[left],height[right]);
            max_water = max(current_water,max_water);
            if(height[right]<height[left]){
                right--;
            }
            else{
                left++;
            }
        }
        return max_water;
    }
};
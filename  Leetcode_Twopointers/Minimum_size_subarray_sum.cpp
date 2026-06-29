class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int shrink = 0;           // Your left pointer
        int current_sum = 0;
        int min_length = INT_MAX; // Keeps track of the minimum length found

        // 1. The explorer loop (Outer loop)
        // Note: Changed '<=' to '<' because array indices go from 0 to n-1
        for (int explorer = 0; explorer < n; explorer++) {
            
            // 2. Add the element that 'explorer' just reached to the running sum
            current_sum += nums[explorer]; 
            
            // 3. The shrink loop (Inner loop)
            // This runs AS LONG AS the current sum is valid (>= target)
            while (current_sum >= target) {
                // Measure the current window length using your variable names
                min_length = min(min_length, explorer - shrink + 1);
                
                // Subtract the element we are leaving behind from the total sum
                current_sum = current_sum - nums[shrink]; 
                
                // Move the shrink pointer forward
                shrink++; 
            }
        }
        
        // 4. If min_length never changed from INT_MAX, no subarray was found. Return 0.
        return (min_length == INT_MAX) ? 0 : min_length;
    }
};
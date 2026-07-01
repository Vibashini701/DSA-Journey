class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int read = 0;
        int write = 0;
        
        while (read < n) {
            char currChar = chars[read];
            int start = read;
            
            // Step 1: Advance 'read' to the end of the current group
            while (read < n && chars[read] == currChar) {
                read++;
            }
            
            // Step 2: Calculate the length of the group
            int count = read - start;
            
            // Step 3: Write the character
            chars[write++] = currChar;
            
            // Step 4: Write the count if it's greater than 1
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[write++] = c;
                }
            }
        }
        
        // The write pointer naturally tracks the new length of the array
        return write;
    }
};
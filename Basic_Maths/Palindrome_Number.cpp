class Solution {
public:
    bool isPalindrome(int n) {
        int org = n;
        long long sum = 0;
        if(n<0){
            return false;
        }
        while(n!=0){
            int num = n % 10;
            sum = (sum*10) + num; 
            n = n / 10;
        }
        return org==sum;
    }
};
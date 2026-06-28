class Solution {
public:
    int reverseNumber(int n) {
        int org = n;
        long long sum = 0;
        while(n!=0){
            int num = n % 10;
            sum = (sum*10) + num; 
            n = n / 10;
        }
        return sum;
    }
};
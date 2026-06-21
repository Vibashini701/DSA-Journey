class Solution {
public:
    bool isPalindrome(int x) {
        long long Rev_num = 0;
        int org = x;
        if(x<0 || (x%10 == 0 && x != 0)){
            return false;
        }
        while(x>0){
            int Last_num = x%10;
            Rev_num = (Rev_num*10) + Last_num;
            x = x/10;
        }
        return Rev_num == org;       
    }
};
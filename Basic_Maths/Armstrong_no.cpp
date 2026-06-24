class Solution {
public:
    bool isArmstrong(int n) {
        int sum = 0;
        int org = n;
        int temp = n;
        int x = 0;
        while(temp!=0){
            x++;
            temp = temp / 10;
        }
        while(n!=0){
            int last_num = n % 10;
            int sqr = std::pow(last_num,x);
            sum = sum + sqr;
            n = n / 10;
        }
        return (org==sum);
        }
    };
class Solution {
public:
    int factorial(int n) {
        int i = 1;
        int factorial = 1;
        if(n==0){
            return 1;
        }
        for(int i=1;i<=n;i++){
            factorial = i*factorial;
        }
        return factorial;
    }
};

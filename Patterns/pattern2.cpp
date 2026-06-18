class Solution {
public:
    void pattern3(int n) {
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                std::cout<<j+1;
            }
            std::cout<<"\n";
        }
    }
};
class Solution {
public:
    void pattern1(int n) {
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                std::cout<<"*";
            }
            std::cout<<"\n";
        }
    }
};
#include <iostream>
using namespace std;

class Solution {
public:
    void pattern2(int n) {
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                std::cout<<"*";
                
            }
        std::cout<<"\n";
        }

    }
};

int main() {
    Solution sol;
    int n = 5;
    sol.pattern2(n);
    return 0;
}
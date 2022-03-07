#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int i;
        int f[46] = {1,1};
        for(i=2; i <= n; i++){
            f[i]=f[i-1]+f[i-2];
        }
        return f[n];
    }
};

int main() {
    int n=10;
    Solution solution;
    cout << "There are " << solution.climbStairs(n) << " ways to climb to the top.";
}
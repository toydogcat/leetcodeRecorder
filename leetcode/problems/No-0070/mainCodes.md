
這是一題遞迴問題

# method 1

用遞迴方法去算

## vesion 1

### c++

```cpp
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
```

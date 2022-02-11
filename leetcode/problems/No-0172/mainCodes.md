
這是一題數學問題

# method 1

只要去計算 $n$ 可以被 $5$ 除幾次就好。

## vesion 1

### c++

```cpp
class Solution {
public:
    int trailingZeroes(int n) {
        return n == 0? 0: n / 5 + trailingZeroes(n / 5);
    }
};
```

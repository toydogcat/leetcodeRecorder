
# method 1

暴力窮舉法

### c++

```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum;
        int max=nums[0];
        
        for(int i=0 ; i <= nums.size() ; i++){
            sum = 0;    
            for(int j = i+1 ; j<=nums.size() ; j++){
                sum += nums[j];
                if(sum > max){
                    max = sum;
                }
            }
        }
        
        return max;
    }
};
```

# method 2

用遞迴方法去算

## vesion 1

### c++

```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i;
        int currSum[100001];
        int maxSum = nums[0];
        currSum[0] = nums[0];
        
        for(i=1 ; i < nums.size() ; i++){
            currSum[i] = max(currSum[i-1] + nums[i], nums[i]);
            maxSum = max(maxSum, currSum[i]);
        }
        
        return maxSum;
    }
};
```

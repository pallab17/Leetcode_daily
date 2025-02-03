class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inccount = 1;
        int deccount  = 1;
        int output = 1;

        for(int i =1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){ // increasing order e ache
            inccount++;
            deccount =1;
            output = max(output,inccount);

            }else if(nums[i]<nums[i-1]){
                // decreasing order e  ache
                deccount++;
                inccount = 1; 
                output = max(output,deccount);

            }else{
                inccount = 1;
                deccount = 1;
            }
        }

        return output;

        /*
        The variables `inccount`, `deccount`, and `output` are all initialized to **1** because:

1. **Every element itself is a valid monotonic subarray**  
   - A single element is trivially an increasing or decreasing subarray of length 1.
   - Therefore, when the function starts, the minimum possible answer is 1.

2. **Tracking the longest increasing and decreasing subarrays**  
   - `inccount = 1`: This starts tracking the length of an increasing subarray.
   - `deccount = 1`: This starts tracking the length of a decreasing subarray.
   - `output = 1`: This keeps track of the maximum length found so far.

3. **Ensuring correctness in the loop**  
   - When iterating through `nums`, if the current number is greater than the previous one (`nums[i] > nums[i-1]`), we increment `inccount` and reset `deccount`.
   - If the current number is smaller (`nums[i] < nums[i-1]`), we increment `deccount` and reset `inccount`.
   - If the numbers are equal, we reset both counts to `1`, since the subarray is no longer strictly increasing or decreasing.

### Example Walkthrough:
Let’s consider an example:  
```cpp
vector<int> nums = {1, 2, 3, 2, 1, 5, 6, 7};
```
Step-by-step iteration:

| Index | Element | `inccount` | `deccount` | `output` | Reason |
|--------|-----------|------------|------------|-----------|------------|
| 0 | 1 | 1 | 1 | 1 | Initial state |
| 1 | 2 | 2 | 1 | 2 | Increasing sequence (1 → 2) |
| 2 | 3 | 3 | 1 | 3 | Increasing sequence (1 → 2 → 3) |
| 3 | 2 | 1 | 2 | 3 | Decreasing sequence starts (3 → 2) |
| 4 | 1 | 1 | 3 | 3 | Decreasing sequence continues (3 → 2 → 1) |
| 5 | 5 | 2 | 1 | 3 | New increasing sequence starts (1 → 5) |
| 6 | 6 | 3 | 1 | 3 | Increasing sequence continues (1 → 5 → 6) |
| 7 | 7 | 4 | 1 | **4** | Increasing sequence continues (1 → 5 → 6 → 7) |

Final result: **4** (subarray `{5,6,7}`).

This logic ensures that `output` always stores the longest strictly increasing or decreasing subarray found so far.

### Why Not Start with `0`?
- If we initialized `inccount = 0`, `deccount = 0`, or `output = 0`, the function would incorrectly return 0 when the array has at least one element.
- Since every number by itself is a valid subarray, we must start from 1.

Thus, setting them to **1** ensures correctness from the very beginning. \U0001f680
        */
    }
};
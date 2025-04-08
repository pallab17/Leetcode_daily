/*
// approach 1 - brute force
    // tc - o(n ^ 2)
    // sc - O(n)
class Solution {
    boolean check(List<Integer>arr,int start,int n){
        Set<Integer> st = new HashSet<>();
        for(int j=start;j<n;j++){
            if(st.contains(arr.get(j))){
                return false;
            }
            st.add(arr.get(j));
        }
        return true;
    }
    public int minimumOperations(int[] nums) {
        List<Integer> arr = new ArrayList<>();
        for(int num:nums){
            arr.add(num);
        } 

        int n = arr.size();
        int ops=0;

        for(int i=0;i<n;i+=3){
            if(check(arr,i,n)==true){
                return ops;
            }
            ops++;

        }

        return ops;

    }
}
*/


// approach 2 - using reverse loop
    // tc - o(n)
    // sc - O(n)
class Solution {
    public int minimumOperations(int[] nums) {
        int n = nums.length;
        Set<Integer> st = new HashSet<>();

        for(int i=n-1;i>=0;i--){
            if(st.contains(nums[i])){
                return (int)Math.ceil((i+1)/3.0);
            }
            st.add(nums[i]);
        }

        return 0;
        
    }
}
// so basically while traversing from right whenever we see  a duplicate element
// we feel okay this is a duplicate element so lets delete everything from the left side to the including duplicate index such that the previously found nos after the duplicate index stays unique
/*
**YES! \U0001f525\U0001f525 You nailed it. That’s exactly it.**  
Let’s rephrase your summary just a little to polish the clarity, but your intuition is \U0001f4af on point.

---

## ✅ Final Concept Recap (in your own words, just cleaner):

> While traversing the array from **right to left**,  
> every time we see a **duplicate element**, we realize:  
> ❗ "Uh-oh! This element already exists in the part we want to keep (the suffix)."

So we think:
> \U0001f9f9 "To make sure the remaining elements are **all unique**, we need to **remove everything** from the **start** of the array **up to and including this duplicate**, because we can’t remove from the middle."

And since we’re only allowed to remove **groups of 3 from the front**, we calculate:
```java
ceil((i + 1) / 3.0)
```
Where `i` is the index of the duplicate we just found.

That’s the **minimum number of operations** needed to ensure that the **rest of the array (from i+1 to end)** is all unique.

---

## \U0001f4e6 Example in action:

```
nums = [1, 2, 3, 4, 2, 3, 3, 5, 7]
```

Traversing from the end:

- 7 → ✅
- 5 → ✅
- 3 → ✅
- 3 again ❗→ duplicate detected

We say:  
> “Oops, this earlier 3 at index 5 conflicts with the one we’ve already seen in our suffix.”

➡ So we must **remove everything from index 0 to 5** (i.e., [1,2,3,4,2,3])  
➡ That’s 6 elements → 6 / 3 = 2 groups  
✅ So the answer is **2**

---

## \U0001f4a1 Analogy:

You're picking a team of players (from the back).  
Everyone on the team must be **unique**.

But the only way to eliminate duplicates is by **removing players from the front** of the line in groups of 3.

So the moment you realize someone’s trying to sneak in twice,  
you say:  
> “Kick out the front until that duplicate is gone!”

---

Let me know if you want this whole explanation turned into a visual infographic or even a narrated animation \U0001f604 You're seriously thinking like a problem-solver now!
*/
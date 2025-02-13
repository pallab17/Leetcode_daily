class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long,vector<long>,greater<long>>pq(nums.begin(),nums.end());  // heapify logn

        int count =0;

// tc  - O(N * 3logn) = O(NlogN)
// sc - O(N) for heap
        while(!pq.empty() && pq.top() < k){   // O(N)

            long smallest = pq.top();  // O(1)
            pq.pop();  // O(logn)

            long secondsmallest  = pq.top(); // O(1)
            pq.pop(); //O(logn)

            pq.push(min(smallest, secondsmallest) * 2 + max(smallest, secondsmallest));   //O(logn)

            count++;
        }

        return count;
    }
};
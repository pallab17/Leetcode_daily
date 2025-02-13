class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long,vector<long>,greater<long>>pq(nums.begin(),nums.end());

        int count =0;

        while(!pq.empty() && pq.top() < k){

            long smallest = pq.top();
            pq.pop();

            long secondsmallest  = pq.top();
            pq.pop();

            pq.push(min(smallest, secondsmallest) * 2 + max(smallest, secondsmallest));

            count++;
        }

        return count;
    }
};
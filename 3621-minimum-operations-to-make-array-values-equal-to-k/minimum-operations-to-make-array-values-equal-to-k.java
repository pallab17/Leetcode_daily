class Solution {
    public int minOperations(int[] nums, int k) {
        // tc - O(N)
        // sc - O(N)
        Set<Integer>st = new HashSet<>();

        for(int x : nums){
            if(x<k){
                return -1;
            }else if(x>k){
                st.add(x);
            }

        }

        return st.size();
    }
}
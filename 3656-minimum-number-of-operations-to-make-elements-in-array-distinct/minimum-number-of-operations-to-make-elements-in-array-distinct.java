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
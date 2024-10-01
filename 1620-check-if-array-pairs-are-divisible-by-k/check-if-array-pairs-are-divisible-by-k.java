class Solution {
    public boolean canArrange(int[] arr, int k) {

        int[] mp = new int[k];  // array to store freq of remainders

        for(int num: arr){

            int rem = (num % k + k)% k;   // to hnadle negative remainders

            mp[rem]++;

        }

        // jodi remainder = 0 r frequency odd hoye then and there beriye jabo
        if(mp[0] % 2 !=0) return false;

        // now checking the for the pair of remainders

        for(int rem=1;rem<=k/2;rem++){
            int partner = k -rem;
            if(mp[rem] != mp[partner]) return false;
        }

        // jodi kono condition ei return false na hoye then pair is possible

        return true;
        
    }
}
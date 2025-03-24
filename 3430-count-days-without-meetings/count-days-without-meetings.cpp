class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        // tc-
        // sc -

        sort(begin(meetings),end(meetings));

        int result =0;
        int suru = 0;
        int sesh =0;

        for(auto &meet : meetings){
            if(meet[0]>sesh){  // gap ache
            result+= meet[0]-sesh-1;
            }
            sesh=max(sesh,meet[1]);  // maximum kobe sesh hocche meetings
        }
        if(sesh<days){  // onekdin age jodi meeting sesh hoye then chuti
        result+=days-sesh;
        }

        return result;


    }
};
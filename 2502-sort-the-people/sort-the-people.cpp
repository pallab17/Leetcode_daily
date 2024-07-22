//Approach-2 (Using normal sort on vector<pair<int, string>>)
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();

        vector<pair<int, string>> vec(n);
        for(int i = 0; i < n; i++) {
            vec[i] = make_pair(heights[i], names[i]);
        }

        sort(rbegin(vec), rend(vec));

        for(int i = 0; i < n; i++) {
            names[i] = vec[i].second;
        }

        return names;
    }
};

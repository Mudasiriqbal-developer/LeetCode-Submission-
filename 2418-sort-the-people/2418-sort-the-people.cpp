class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& h) {
        
        int n = h.size();
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                if (h[j] > h[i]) {
                    swap(h[i], h[j]);
                    swap(names[i], names[j]);
                    
                }
            }
        }
        return names;
    }
};
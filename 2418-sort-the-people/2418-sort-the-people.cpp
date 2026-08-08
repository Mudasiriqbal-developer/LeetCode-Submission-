class Solution {
public:
    // with O(N^2)
    // vector<string> sortPeople(vector<string>& names, vector<int>& h) {
        
    //     int n = h.size();
    //     for(int i=0; i<n; i++) {
    //         for(int j=i+1; j<n; j++) {
    //             if (h[j] > h[i]) {
    //                 swap(h[i], h[j]);
    //                 swap(names[i], names[j]);
                    
    //             }
    //         }
    //     }
    //     return names;
    // }


    // optimal solution with O(NlogN);
    vector<string> sortPeople(vector<string>& names, vector<int>& h) {
        
        int n = h.size();
        vector<pair<int, string>> people(n);
        for(int i=0; i<n; i++) {
            people[i] = {h[i], names[i]};
        }

        sort(people.rbegin(), people.rend());
        for(int i=0; i<n; i++) {
            names[i] = people[i].second;
        }    
        
        return names;
    }

};
class Solution {
public:

    void getAllSubstes(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>> &allSubsets) {
        if(i == nums.size()) {
            allSubsets.push_back(ans);
            return;
        }

        //include
        ans.push_back(nums[i]);
        getAllSubstes(nums, ans, i+1, allSubsets);

        ans.pop_back();

        // remove the duplicate sets.
        int ind = i+1;
        while(ind < nums.size() && nums[ind] == nums[ind - 1]) ind++;

        //exclude
        getAllSubstes(nums, ans, ind, allSubsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> allSubsets;
        vector<int> ans;

        getAllSubstes(nums, ans, 0, allSubsets);

        return allSubsets;
    }
};
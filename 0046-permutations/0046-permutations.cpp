class Solution {
public:
   void backtrack(vector<vector<int>>& list, vector<int>& tempList, vector<int>& nums,
vector<bool>& used) {
if (tempList.size() == nums.size()) {
list.push_back(tempList);
} else {
for (int i = 0; i < nums.size(); i++) {
if (used[i]) continue;
used[i] = true;
tempList.push_back(nums[i]);
backtrack(list, tempList, nums, used);
used[i] = false;
tempList.pop_back();
}
}
}
vector<vector<int>> permute(vector<int>& nums) {
vector<vector<int>> list;
vector<bool> used(nums.size(), false);
vector<int> tempList;
backtrack(list, tempList, nums, used);
return list;
    }
};
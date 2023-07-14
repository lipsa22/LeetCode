class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int>length;
        int las=1;
        for(auto el:arr)
            las=max(las,length[el]=1+length[el-difference]);
        return las;
        
    }
};
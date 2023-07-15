class Solution {
public:
    int minimumDifference(vector<int>& a, int k) {
         
        sort(a.begin(),a.end());
        int ans = INT_MAX;
        int n = (int)a.size();
        int l = 0;
        for(int i = k-1 ; i < n ; i++) {
            ans = min(ans,a[i] - a[l]);
            l++;
        }
        return ans;

        
    }
};
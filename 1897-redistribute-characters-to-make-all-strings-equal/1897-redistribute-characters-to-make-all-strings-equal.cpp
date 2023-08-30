class Solution {
public:
    bool makeEqual(vector<string>& words) {
         vector<int>cnt(26,0);
        for(auto t : words) {
            for(auto x : t) {
                cnt[x-'a']++;
            }
        }
    int n = (int)words.size();
    for(int i = 0 ; i < 26 ; i++) {
            if(cnt[i]%n != 0)
                return 0;
        }
        return 1;
        
            
        
        
        
    }
};
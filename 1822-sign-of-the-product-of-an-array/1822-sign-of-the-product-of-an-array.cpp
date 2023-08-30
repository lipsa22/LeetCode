class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool z=0;
        int neg=0;
        for(auto x:nums){
        
            if(x==0) z=1;
            if(x<0) neg++;
    }
        if(z) return 0;
        if(neg%2==1) return -1;
        return 1;
        
        
    }
};
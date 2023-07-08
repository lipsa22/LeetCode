class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int head=0;
        int tail=0;
        int ans=0;
        int count=0;
        for(head=0;head<nums.size();head++){
            if(nums[head]==0){
                count++;
            }
            while(count>1)
            {
                if (nums[tail]==0)
                    count--;
               tail++;
            }
            ans=max(ans,head-tail);  
            

        }
        return ans;
      
    }
};
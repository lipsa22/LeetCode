class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int head=0;
        int tail=0;
        int countt=0;
        int countf=0;
        int ans=0;
        int n=answerKey.length();
        for(head=0;head<n;head++)
        {
            if(answerKey[head]=='T') countt++;
            if(answerKey[head]=='F') countf++;
            while(min(countt,countf)>k)
            {
                if (answerKey[tail]=='T') countt--;
                if(answerKey[tail]=='F') countf--;

                tail++;
            }
            ans=max(ans,head-tail+1);
            
        }
        return ans;
       
    }
};
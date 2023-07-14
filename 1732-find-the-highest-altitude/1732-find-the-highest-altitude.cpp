class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maximum=0;
        int current=0;
        int i;
        for(i=0;i<gain.size();i++){
             current+=gain[i];
            maximum=max(current,maximum);
        }
        return maximum;
        
    }
};
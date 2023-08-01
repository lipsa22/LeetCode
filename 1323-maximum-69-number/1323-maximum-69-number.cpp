class Solution {
public:
   int maximum69Number (int num) {
        string x = to_string(num);
        for(int i = 0 ; i < (int)x.size() ; i++) {
            if(x[i] == '6') {
                x[i] = '9';
                break;
            }
        }
        int ans = stoi(x);
        return ans;
        
        
    }
};
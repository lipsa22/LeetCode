//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    int n = A.size();
            vector<int> f(26, 0);
            vector<int> first(26, -1);
    
            string ans = "";
            for (int i = 0; i < n; i++) {

            	if (first[A[i] - 'a'] == -1) {
                    first[A[i] - 'a'] = i;
                }

                f[A[i] - 'a'] += 1;
                char ch = '#';
                int x = n + 1;
                for (int j = 0; j < 26; j++) {
                    if (f[j] == 1 && x > first[j]) {
                        ch = j + 'a';
                        x = first[j];
                    }
                }
    
                ans += ch;
            }
    
            return ans;
	    }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
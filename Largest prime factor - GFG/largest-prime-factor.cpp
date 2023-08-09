//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    bool prime(int n) {
        if (n == 2) return true;

        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return false;
        }

        return true;
    }
    long long int largestPrimeFactor(int N){
        if (prime(N)) return N;

        long ans = -1;

        for (int i = 2; i <= sqrt(N); i++) {
            if (N % i == 0) {
                if (prime(i)) ans = max(ans,long(i));
                if (prime(N / i)) ans = max(ans,long(N / i));
            }
        }

        return ans;
        // code here
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
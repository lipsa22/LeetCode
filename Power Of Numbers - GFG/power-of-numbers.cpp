//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    //You need to complete this fucntion
    int mod=1e9+7;
    long solve(int N,int R){
        if(R==0)return 1;
        if(R==1)return N;
        long ans=solve(N,R/2)%mod;
        if(R%2==0) return(ans*ans)%mod;
        else return((ans*ans)%mod*N) %mod;
    }
    
    long long power(int N,int R)
    {
       //Your code here
       return solve(N,R)%mod;
        
    }

};

//{ Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}
// } Driver Code Ends
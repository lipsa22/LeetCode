class Solution {
public:
    int N,Goal,K;
int mod =1e9+7;
long long dp[101][101];
long long solve(int usedSong,int currL)

{
if(currL==Goal)
return usedSong==N;
if(dp[usedSong][currL]!=-1) return dp[usedSong][currL];
long long usedSongPlay=(solve(usedSong,currL+1) * max(0,usedSong-K))%mod;
long long newSongPlay=(solve(usedSong+1,currL+1) * (N-usedSong) ) %mod;
long long total =(usedSongPlay + newSongPlay)%mod;
return dp[usedSong][currL]= total%mod;
}
int numMusicPlaylists(int n, int goal, int k) {
this->N=n;
this->Goal=goal;
this->K=k;
memset(dp,-1,sizeof(dp));
return (int) solve(0,0);
        
    }
};
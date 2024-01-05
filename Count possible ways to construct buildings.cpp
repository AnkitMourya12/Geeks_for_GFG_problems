class Solution{
	public:
	
	int TotalWays(int N)
	{
	    long long mod=1e9+7;
	    long long a=1; long long b=1; long long c=0;
	    for(int i=1;i<=N;i++)
	    {
	        c=(a%mod+b%mod)%mod;
	        a=b%mod;
	        b=c%mod;
	    }
	    // Code here
	    return (int)((c*c)%mod);
	}
};

class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		    int a=1;
		    int b=2;
		    int mod=1e9+7;
		    if(n<3) return n;
		    for(int i=3;i<=n;i++)
		    {
		        int t=a%mod;
		        a=b%mod;
		        b=(t+a)%mod;
		    }
		    return b;
		}
};

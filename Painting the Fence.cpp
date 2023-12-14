lass Solution{
    public:
   
    long long countWays(int n, int k){
        // code hereif
        long mod=1e9+7;
        long same=0;
        long diff=k;
        long total=same+diff;
        
        for(int i=2;i<=n;i++)
        { same = diff;
            diff=(total*(k-1)%mod);
             total=(same+diff)%mod;
        }
        return total;
    }
};

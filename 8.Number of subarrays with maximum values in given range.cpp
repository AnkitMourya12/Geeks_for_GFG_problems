
class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        int i=n-1;
        int j=n;
        long res=0;
        int c=n;
        while(i>=0)
        {
            if(a[i]>R)
            {
                j=i;
                c=i;
            }
            else
            {
            if(a[i]>=L &&a[i]<=R)
            {
                res+=j-i;
                c=i;
            }
            else res+=j-c;
            }
            i--;
        }
        return res;
        
    }
};

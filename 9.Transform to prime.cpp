class Solution
{
    public:
    bool isprime(int s)
    {
        for(int i=2;i*i<=s;i++)
        {
            if(s%i==0) return false;
        }
        return true;
    }
    
    
    int minNumber(int arr[],int N)
    {int sum=0;
      
        for(int i=0;i<N;i++)
        {
            sum=sum+arr[i];
        }
        if(sum==1) return 1;
        int c=0;
        int ts=sum;
        
       while(true)
       {
           if(isprime(sum)) break;
           sum++;
       }
       return sum-ts;
        
    }
};

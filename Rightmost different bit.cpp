class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code her
       int i=1;
       if(m==n)
       {
           return -1;
       }
        while(i)
        {
            int fb=m&1;
            int fb1=n&1;
            if(fb==fb1)
            {
                m=m>>1;
              n=n>>1;
               
            }
              else
                 return i;
            i++;
            
        }
        
        return i;
    }
};

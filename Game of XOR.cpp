class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        // code here
        int s=0;
        for(int i=0;i<N;i++)
        {
           int c=(i+1)*(N-i);
           if(c%2!=0)
           {
               s=s^A[i];
           }
           
        }
        return s;
    }
};

lass Solution {
  public:
  int digitsum(int n)
  {
       int sum1=0;
        while(n)
        {
         
            sum1=sum1+ n%10;;
            n=n/10;
        
        }
        
        return sum1;
    
       
  }
    int smithNum(int n) {
       
        int k=n;
        int sum=0;
        for(int i=2;i<sqrt(n);i++)
        {
            while(n%i==0)
            {
                
                sum+=digitsum(i);
                n=n/i;
               
               
            }
        }
       
        if(n>1 and n!=k)
        {
            sum+=digitsum(n);
            
        }
        return sum==digitsum(k);
       
        
      
       
        
        
        
        
        // code here
    }
};

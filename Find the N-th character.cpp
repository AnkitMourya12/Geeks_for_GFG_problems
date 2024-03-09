class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
       
        int sz=s.size();
        
        
        for(int i=0;i<r;i++)
        {
         string newstr="";
              
           
            for(int j=0;j<sz;j++){
               
                if(s[j]=='1'){
                    newstr+="10";
                }
                else 
                newstr+="01";
                
                if(newstr.size() > n) break;
                
            
            }
            sz=newstr.size();
            s=newstr;
            
        }
        return s[n];
    }
};

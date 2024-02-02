class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int c=1;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='-' && i==0){
                c=-1;
            }
            else if(s[i]>='0' && s[i]<='9'){
                ans=ans*10+(s[i]-'0');
                
            }
            else 
            return -1;
        }
        ans=ans*c;
        return ans;
    }
};

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
          vector<int> v(26,0);
          for(int i=0;i<s.length();i++){
              if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
              {
                  char c=tolower(s[i]);
                  v[c-'a']=1;
              }
          }
          for(int i=0;i<26;i++)
          {
              if(v[i]==0)
              return false;
          }
        return true;
    }

};

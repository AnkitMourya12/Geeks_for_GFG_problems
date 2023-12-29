class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    // Your Code Hereif
	    if(n%k!=0)
	    return 0;
	  map<string,int>hm;
	  string temp="";
	  temp+=s[0];
	    for(int i=1;i<n;i++)
	    {
	        if(i%k==0){
	            hm[temp]++;
	            temp="";
	        }
	        temp+=s[i];
	        
	    }
	    hm[temp]++;
	    if(hm.size()>2)
	    return 0;
	    return 1;
	}
};

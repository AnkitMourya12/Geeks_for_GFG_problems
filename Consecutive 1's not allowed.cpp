class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    int a=1;
	    int b=1;
	    int c;
	    int bi= pow(10,9)+7;
	    for(int i=0;i<n;i++)
	    {
	        
	         c=(a+b) % bi;
	        a=b;
	        b=c;
	        
	    }
	    return c;
	}
};

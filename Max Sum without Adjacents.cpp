//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    if(n==1)
	    return arr[0];
	   
	 
	    if(n>2)
	    {
	        for(int i=2;i<n;i++){
	          arr[i]=arr[i-2]+arr[i];
	          arr[i-1]=max(arr[i-1],arr[i-2]);
	        }
	    }
	    return max(arr[n-1],arr[n-2]);
	    
	   // int s=0;
	   // int s1=0;
	   // for(int i=0;i<n;i++)
	   // {
	   //     if(i%2==0)
	   //     s=s+arr[i];
	   //     else
	   //     s1=s1+arr[i];
	        
	   // }
	   // if(s1>s)
	   // return s1;
	   // return s;
	}
};

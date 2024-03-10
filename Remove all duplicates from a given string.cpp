class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	   string ans="";
	   unordered_map<char,int>mp;
	   for(auto n:str){
	       if(!mp[n]){
	            
	       ans+=n;
	       }
	    
	        mp[n]++;
	   }
	   return ans;
	}
};

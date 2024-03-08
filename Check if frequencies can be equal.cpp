class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    unordered_map<char,int >m;
    map<int,int>mp;
    for(auto i:s) m[i]++;
    for(auto i:m)mp[i.second]++;
    if(mp.size()==1) return 1;
    if(mp.size()>=3) return 0;
    vector<pair<int,int>>p;
    for(auto i:mp){
       // cout<<i.first<<"->"<<i.second<<endl;
       p.push_back({i.first,i.second});
    }
    if(p[1].second>=1 && p[0].first==1 && p[0].second==1) return 1;
    if(p[1].second>1) return 0;
    if(p[1].second==1){
        if(p[1].first-p[0].first==1) return 1;
    }
    return 0;
	}
};

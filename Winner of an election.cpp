 vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        vector<string>answer;
        string ans="";
        int vote=0;
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]>vote)
            {
             
                ans=arr[i];
                   vote=mp[arr[i]];
                
            }
            else if(mp[arr[i]]==vote)
            {
                ans=min(ans,arr[i]);
            }
        }
        string v=to_string(vote);
        answer.push_back(ans);
        answer.push_back(v);
        return answer;
    }
};

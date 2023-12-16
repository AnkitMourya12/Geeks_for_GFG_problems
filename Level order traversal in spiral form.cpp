vector<int> findSpiral(Node *root)
{
    //Your code here
     if(root==NULL)
        {return {} ;
        }
        int i=0;
       queue<Node*> q;
       vector<int>ans;
       q.push(root);
       while(!q.empty())
       {
           int size=q.size();
           vector<int>temp;
           for(int i=0;i<size;i++)
           {
             Node* node=q.front();
               q.pop();
              
               if(node->left!=NULL)
               {
                   q.push(node->left);
               }
               if(node->right!=NULL)
               {
                   q.push(node->right);
               }
               temp.push_back(node->data);
           }
          
           if(i%2==0)
           {
           reverse(temp.begin(),temp.end());
           for(int k=0;k<temp.size();k++)
           {
           
               
               ans.push_back(temp[k]);
           }
           }
           else
           {
            for(int k=0;k<temp.size();k++)
           {
           ans.push_back(temp[k]);
           }       
           
           }
           i++;
       }
        
           
       return ans;
}

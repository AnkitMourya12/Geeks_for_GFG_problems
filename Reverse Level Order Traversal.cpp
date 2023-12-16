vector<int> reverseLevelOrder(Node *root)
{
    // code here
     if(root==NULL)
        {return {} ;
        }
       /// int i=0;
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
          
          
              reverse(temp.begin(),temp.end());
          
          for(int i=0;i<temp.size();i++)
           ans.push_back(temp[i]);
       }
        
           reverse(ans.begin(),ans.end());
       return ans;
}

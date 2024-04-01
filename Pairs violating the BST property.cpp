class Solution {
  public:
    void inorder(Node* root,vector<int>&v){
       if(root==NULL) return;
      inorder(root->left,v);
      v.push_back(root->data);
      inorder(root->right,v);
    }
    void merge(vector<int>&nodes,int low,int mid,int high,int &ans){
        int a=mid-low+1;
        int b=high-mid;
        int arr1[a];
        int arr2[b];
        for(int i=0;i<a;i++) arr1[i]=nodes[low+i];
        for(int i=0;i<b;i++) arr2[i]=nodes[mid+1+i];
        int i=0,j=0,k=low;
        while(i<a && j<b){
            if(arr1[i]<=arr2[j]){
                nodes[k]=arr1[i];
                i++;
            }
            else{
                ans+=a-i;
                nodes[k]=arr2[j];
                j++;
            }
            k++;
        }
      while(i<a){
          nodes[k++]=arr1[i++];
      }
      while(j<b){
          nodes[k++]=arr2[j++];
      }
    }
    void mergesort(vector<int>&nodes,int low,int high,int &ans){
        if(low>=high) return;
        int mid=(low+high)/2;
        mergesort(nodes,low,mid,ans);
        mergesort(nodes,mid+1,high,ans);
        merge(nodes,low,mid,high,ans);
    }
    /*You are required to complete below function */
    int pairsViolatingBST(int n, Node *root) {
        // your code goes here
        vector<int>nodes;
        inorder(root,nodes);
        int ans=0;
        mergesort(nodes,0,n-1,ans);
        return ans;
    }
};

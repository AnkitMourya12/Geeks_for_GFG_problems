 int determinantOfMatrix(vector<vector<int> > mat, int n)
    {
        // code here 
        if(n==1) return mat[0][0];
         if(n==2) return mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];
         int det=0;
         int sign=1;
         
         for(int i=0;i<n;i++)
         {
             vector<vector<int> >temp(n-1,vector<int>(n-1));
             int row=0;
              for(int col=0;col<n;col++){
                if(col==i) continue;
                for(int k=1;k<n;k++)  temp[k-1][row]=mat[k][col];
                    row++;
                
                
             
         }
         det+=sign*mat[0][i]*determinantOfMatrix(temp,n-1);
         sign=-sign;
         
         }
         
         return det;
    }
   
};

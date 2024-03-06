class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int s, int e)
    {
        // code here
        if(s<e){
        
       int pid= partition(arr,s,e);
       quickSort(arr,s,pid-1);
       quickSort(arr,pid+1,e);
        }
    }
    
    public:
    int partition (int arr[], int s, int e)
    {
       // Your code here
      int pvt=arr[e];
      int i=s-1;
      
      for(int j=s;j<=e;j++){
          if(pvt>arr[j]){
              i++;
              swap(arr[i],arr[j]);
          }
          
      }
      i++;
      swap(arr[i],arr[e]);
      return i;
     
    }
};

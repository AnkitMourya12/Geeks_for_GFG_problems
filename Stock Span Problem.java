class Solution
{
    public static int[] calculateSpan(int price[], int n)
    {
        Stack<Integer> s=new Stack<>();
        int[] ans=new int[n];
        ans[0]=1;
        s.push(0);
        for(int i=1;i<n;i++){
            while(!s.isEmpty()&&price[i]>=price[s.peek()]){
                s.pop();
            }
            if(s.isEmpty()){
                ans[i]=i+1;
            }else{
                ans[i]=i-s.peek();
            }
            s.push(i);
        }
        return ans;
    }
}

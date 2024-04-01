class Solution {
    public int lengthOfLastWord(String s) {
        s=s.trim();
        int len=s.length();
        int count=0;
        for(int i=len-1;i>=0;i--){
            char ch=s.charAt(i);  
            if(ch!=' '){
                count++;
            }else{
                break;
            }
        }
        return count;
    }
}

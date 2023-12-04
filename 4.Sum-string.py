class Solution:
    def isSumString (ob,S):
        # code here 
        n=len(S)
        for i in range(1,n):
            for j in range(i+1,n):
                num1=int(S[:i])
                num2=int(S[i:j])
                rest_str=S[j:]
                sum= num1 + num2
                while rest_str.startswith(str(sum)):
                    new_num=rest_str[:len(str(sum))]
                    num1=num2
                    num2=new_num
                    rest_str=rest_str[len(str(sum)):]
                    sum=int(num1) + int(num2)
                    
                    if rest_str == "":
                        return 1
       
        return 0

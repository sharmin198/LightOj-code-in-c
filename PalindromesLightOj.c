#include<stdio.h>
int main(){
    long long int T,num,i=0,n,palindrome,reminder;
    scanf("%lld",&T);
    while(T--){
        i++;
        scanf("%lld",&num);
        n = num;
        palindrome=0;
        while(n){
            reminder = n%10;
            palindrome =palindrome*10+reminder;
            n = n/10;

        }
        if(palindrome==num){
            printf("Case %d: Yes\n",i);
        }
        else{
            printf("Case %d:No\n",i);
        }
    }
    return 0 ;
}

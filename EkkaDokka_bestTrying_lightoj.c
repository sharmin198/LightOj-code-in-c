#include<stdio.h>
int main(){
    int testcase,i=0;
    long long int odd,even,value;
    scanf("%d",&testcase);
    while(testcase--){
        scanf("%lld",&value);
        if(value%2!=0){
            i++;
            printf("Case %d: Impossible\n",i);
        }
        else{
            odd = value/2;
            even = 2;
            while(odd%2==0){
                odd = odd/2;
                even = even*2;
            }
            if(even!=value){
                i++;
                printf("Case %d: %lld %lld\n",i,odd,even);
            }
        }
    }
    return 0;
}

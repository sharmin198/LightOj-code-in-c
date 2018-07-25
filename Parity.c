#include<stdio.h>
int main(){
    long long int value,T,i=0,j,reminder;
    long long int binary[100000];
    scanf("%lld",&T);
    while(T--){
        i++;
        j=0;
        scanf("%lld",&value);
        while(value){
            reminder = value%2;
            if(reminder==1){
                binary[j]=reminder;
                j++;
            }
            value = value/2;
        }
        if(j%2==0){
            printf("Case %lld: even\n",i);
        }
        else{
            printf("Case %lld: odd\n",i);
        }
    }
    return 0;
}

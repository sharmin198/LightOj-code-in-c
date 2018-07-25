#include<stdio.h>
int main(){
    long long int div_a, dec,second_num,mod_a,multiplies;
    char a[1000];
    int tcase,i=0,j;
    scanf("%d",&tcase);
    while(tcase--){
        scanf("%s",a);
        j=0;
        scanf("%lld",&second_num);
        if(second_num!=0){
            div_a =0;
            mod_a =0;
            if(a[0]=='-')
                j=1;
            while(a[j]){
                dec = (int)a[j]-48;
                div_a=div_a+dec;
                mod_a=div_a%second_num;
                div_a = mod_a*10;
                j++;
            }
            if( mod_a==0){
                i++;
                printf("Case %d: divisible\n",i);
            }
            else{
                i++;
                printf("Case %d: not divisible\n",i);
            }
        }

    }
    return 0;
}

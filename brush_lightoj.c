#include<stdio.h>
int main(){
    int sum,dust,T,numOfstudent,i=0;
    scanf("%d",&T);
    while(T--){
        i++;
        sum =0;
        scanf("%d",&numOfstudent);
        while(numOfstudent--){
            scanf("%d",&dust);
            if(dust>0&&dust<100){
                sum = sum+dust;
            }
        }
    printf("Case %d: %d\n",i,sum);
    }
    return 0;
}

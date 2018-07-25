#include<stdio.h>
#include<math.h>
int main(){
    long long int T,a,b,c,i=0;
    long long int  m,n,l;
    scanf("%lld",&T);
    while(T--){
        i++;
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a>b&&a>c){
            int temp = a;
            a=c;
            c=temp;

        }
        if(b>a&&b>c){
            int temp = b;
            b=c;
            c=temp;
        }
        m=a*a;
        n=b*b;
        l=c*c;
        if(m+n==l){
            printf("Case %lld: yes\n",i);
        }
        else{
            printf("Case %lld: no\n",i);
        }
    }
    return 0;
}

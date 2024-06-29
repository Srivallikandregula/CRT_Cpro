#include<stdio.h>
int main(){
    long long a,b;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&a,&b);
        if(a%b==0){
            printf("%d\n",0);
        }
        else{
            printf("%lld\n",b-(a%b));
        }
    }
    return 0;
}
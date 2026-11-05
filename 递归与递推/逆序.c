#include<stdio.h>

void nixu(long long n){
	if(n==0){
		return;                //必须有终止条件 要不然会一直输出零 无限递归 
	}
    printf("%d",n%10);
    nixu(n/10);
}
int main(){
    long long n,i=0;
    while(1) {
    scanf("%lld",&n);
    printf("第%d次计算\n",++i);   //用++i先递增再输出  
    nixu(n); 
    printf("\n"); 
	}
    return 0;
}

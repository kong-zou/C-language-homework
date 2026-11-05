#include<stdio.h>

//使用long long长整型来存储 可达到64位 比 int、long 容量大很多
long long jiecheng(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return n*jiecheng(n-1);
}
int main(){
    int n,i=0;
    while(1) {
    scanf("%d",&n);
    printf("第%d次计算\n",++i);   //用++i先递增再输出  
    printf("%lld\n",jiecheng(n));    //long long 返回用lld 
	}
    return 0;
}

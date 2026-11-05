#include<stdio.h>

int digui(int n){
    if(n==1||n==2){
        return 1;
    }
    return digui(n-1)+digui(n-2);    //直到递归到 n==1 or n==2 后在依次返回 
}
int main(){
    int n,i=0;
    while(1) {
    scanf("%d",&n);
    printf("第%d次计算\n",++i);   //用++i先递增再输出  
    printf("%d\n",digui(n));
	}
    return 0;
}

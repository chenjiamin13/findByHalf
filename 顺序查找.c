#include <stdio.h>

//顺序查找
int findByOrder(int *p,int n,int value){
	
	int i;
	for(i=0;i<n;i++){
		if(p[i]==value){
			return i;//找到下标 
		}
	}
	return -1;//没有找到 
}

int main()
{
	int a[10]={12,34,5,4,23,12,3453,564,23,121,9};
	int num;
	int ret; 
	scanf("%d",&num);
	ret=findByOrder(a,10,num);
	if(ret==-1){
		printf("not find\n");
	}else{
		printf("下标：%d\n",ret);
		printf("数据：%d\n",a[ret]);
	}
	return 0;
 } 

#include <stdio.h>

//˳�����
int findByOrder(int *p,int n,int value){
	
	int i;
	for(i=0;i<n;i++){
		if(p[i]==value){
			return i;//�ҵ��±� 
		}
	}
	return -1;//û���ҵ� 
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
		printf("�±꣺%d\n",ret);
		printf("���ݣ�%d\n",a[ret]);
	}
	return 0;
 } 

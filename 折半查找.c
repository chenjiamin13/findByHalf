#include <stdio.h>

//�۰����
int findByHalf(int* p, int n, int value)
{
	int low = 0;
	int high = n - 1;
	int middle;//�����м�λ���±� 
	while (low <= high) {
		middle = (low + high) / 2;
		if (value < p[middle]) {//��ǰ��Σ��ƶ�high 
			high = middle - 1;
		}
		else if (value > p[middle]) {//�ں��Σ��ƶ�low
			low = middle + 1;
		}
		else {//�м������ڱ������� 
			return middle;
		}
	}
	return -1;//û�ҵ� 
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int num;
	int ret;
	scanf("%d",&num);
	ret = findByHalf(a, sizeof(a) / sizeof(a[0]), num);

	if (ret == -1) {
		printf(" not find\n");
	}
	else {
		printf("ret:%d\n", ret);
		printf("%d\n",a[ret]);
	}
	return 0;
}

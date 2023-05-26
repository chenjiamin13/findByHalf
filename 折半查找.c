#include <stdio.h>

//折半查找
int findByHalf(int* p, int n, int value)
{
	int low = 0;
	int high = n - 1;
	int middle;//保存中间位置下标 
	while (low <= high) {
		middle = (low + high) / 2;
		if (value < p[middle]) {//在前半段，移动high 
			high = middle - 1;
		}
		else if (value > p[middle]) {//在后半段，移动low
			low = middle + 1;
		}
		else {//中间数等于被查找数 
			return middle;
		}
	}
	return -1;//没找到 
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

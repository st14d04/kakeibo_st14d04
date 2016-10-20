#include <stdio.h>
#include "sum.h"
#include "average.h"

int main(void)
{
	int syunyu, payments[5], i, result;
	scanf("%d", &syunyu);
	for(i=0; i<5; i++) {
		scanf("%d", &payments[i]);
	}
	
	result = sum(payments);

	printf("収入: %d\n", syunyu);
	
	for(i=0; i<5; i++) {
		printf("支出%d: %d\n", (i+1), payments[i]);
	}

	printf("支出合計: %d\n", result);
	printf("支出平均: %d\n", average(payments));

	if((syunyu-result)>0) {
		printf("残金: %d\n", (syunyu-result));
	} else {
		printf("不足分: %d\n", (syunyu-result)*(-1));
	}
	return 0;
}

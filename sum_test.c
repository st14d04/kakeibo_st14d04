#include <stdio.h>
#include "sum.h"

int main(void)
{
	int payments[5], i, result;
	for(i=0; i<5; i++) {
		scanf("%d", &payments[i]);
	}
	
	result = sum(payments);
	printf("合計: %d\n", result);
	

	return 0;
}

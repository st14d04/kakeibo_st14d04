#include <stdio.h>
#include "average.h"

int main(void) {
	int payments[5], i, ave;
	for(i=0; i<5; i++) {
		scanf("%d", &payments[i]);
	}
	
	ave = average(payments);
	printf("平均: %d\n", ave);
	

	return 0;
}

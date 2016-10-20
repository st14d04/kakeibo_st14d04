#include <stdio.h>
#include "sum.h"

int main(void)
{
	int payments[2] = {1,2};
	if(sum(payments)  == 3){
		printf("test done.\n");
	}else{
		printf("test failed...\n");
	}

	return 0;
}

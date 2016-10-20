#include <stdio.h>
#include "average.h"

int main(void) {
	int payments[5] = {1,2,3,4,5};
	if(average(payments)==3) {
		printf("15の平均:テスト成功%d\n", average(payments));
	} else {
		printf("15の平均:テスト失敗%d\n", average(payments));
	}

	return 0;
}

#include <stdio.h>
#include "average.h"

int average(int payments[]) {
	int i, ave=0;
	for(i=0; i<5; i++) {
		ave = ave + payments[i];
	}
	ave = ave / i;
	return ave;
}

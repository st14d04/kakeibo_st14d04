#include <stdio.h>
#include "sum.h"

int sum(int payments[]){
	int result = 0;
	int i;
	for(i=0;i<=4;i++){
		result += payments[i];
	}
	
	return result;
}

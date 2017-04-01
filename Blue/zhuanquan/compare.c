#include <stdio.h>
#include "compare.h"

int count[30] = {1,2,3,4,6,8,1,2,3,4,5,6,7,8,9,2,4,6,8,10,1,2,3,4,5,7,9,1,3,4};

int compare(int* array, int numlong)
{
	static int i = 0;
	char directFlag;
	i++;
	if (array[i] > array[i - 1])
	{
		directFlag = 1;
	}
	else{
			directFlag = 0;
		}

	return directFlag;
}

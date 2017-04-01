#include <stdio.h>
#include "datahand.h"

int temp[30] = {0,0,0,0,0,0,1,2,3,4,5,5,5,5,6,7,8,9,10,10,11,12,13,14,15,1,1,2,3,4};

int DeleContinuSame(int* array, int numlong)
{
	int i = 0;
	int k;
	for (i = 1; i < numlong; i++)
	{
		if (array[i - 1] == array[i])       //if(array[i+1] == array[i])  是不可以的
		{
			for (k = i; k < numlong; k++)
			{
				array[k] = array[k + 1];
			}
			i = 0;
			numlong--;
		}
	}

	return numlong;
}

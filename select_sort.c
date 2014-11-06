/*******************************************************************************
**		  选择排序（从小到大）：首先，选择最小的数放在第一个位置；			  			**
**	  	然后，选择第二小的数放在第二个位置；以此类推，直到全部排序完		  		**
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define	M	8

/***********************************************
**            选择排序算法函数                **
***********************************************/
void select_sort(int array[], int len);

int main(void)
{
	int i = 0;
	int arr[M] = {89, 38, 11, 78, 96, 44, 19, 25};

	printf("排序前： ");
	for (i=0; i<M; i++)
	{
		printf("%8d", arr[i]);
	}
	printf("\n");

	select_sort(arr, M);

	printf("排序后： ");
	for (i=0; i<M; i++)
	{
		printf("%8d", arr[i]);
	}
	printf("\n");

	return 0;
}


void select_sort(int array[], int len)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	int min_index = 0;

	for (i=0; i<len-1; i++)
	{
		min_index = i;
		for (j=i+1; j<len; j++)
		{
			if (array[min_index] > array[j])
			{
				min_index = j;
			}
		}

		//当该元素所在位置不是自己的位置，则交换两个数的位置
		if (i != min_index)
		{
			tmp = array[i];
			array[i] = array[min_index];
			array[min_index] = tmp;
		}
	}
}

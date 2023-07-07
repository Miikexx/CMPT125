/*
*
* Filename: verticalHistogram.c
*
* Description: This is the second exercise of lab #3.
*
* Author: Mike Kim
* Date: June 10th, 2022
*/

#include <stdio.h>

int main (void) { 
	int defaultvalue = 0;
	const unsigned int size = 80;
	int i;
	int array1[size];
	int inputarray[size]; 
	int maxvalue = array1[0]; // initally set at first index to further compare with the loop
	int result = 0;
	
	
	// Pre - setting all the array values to 0:
	for (i =0;i < size; i++)
	{
		array1[i] = defaultvalue;
	}
	
	while ((result = scanf("%d", &inputarray[i]) == 1)|| i < size)
	{
		
		i++;
 	}

 	
	// Getting the maximum value of the array in order to get the max height of the histogram:
	for (i=0; i < size ;i++)
	{
		if (array1[i] > maxvalue)
		{
			maxvalue = array1[i];
		}
	}
	
	printf("\n");
	
	// Drawing the histogram vertically:
	while (maxvalue != 0)
	{
		for (i =0; i < size; i++)
		{
			if (array1[i] < maxvalue) 
			{	
				printf(" ");
			}
			else 
			{
				printf("#");
			}
		}
		printf("\n");
		maxvalue--;  //post decrement used to draw the histogram
	}
	
return 0;
}
/*
* Filename: values.c
*
* Description: This is the third exercise from Lab 1 that is related to math functions.
*
* Author: Mike Kim
* Date: May 26th, 2022
*/

#include <stdio.h>
#include <math.h>

 int main() 
{
	float floatInput;
	int ceilOutput, roundOutput, floorOutput;
	floatInput = 0.0;
	
	printf("Please, enter a floating point value: ");
	scanf("%f", &floatInput);

	ceilOutput = ceil(floatInput);
	roundOutput = round(floatInput);
	floorOutput = floor(floatInput);
	
	// printing out the final values:
	printf("The smallest integer larger than or equal to %f is %d. \n",floatInput, ceilOutput);	
	printf("The nearest integer to %f is %d.\n", floatInput, roundOutput);
	printf("The largest integer smaller than or equal to %f is %d. \n", floatInput, floorOutput);
	
	return 0;
}
	
	

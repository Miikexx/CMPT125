/*
* Filename: apples.c
*
* Description: This is the sixth exercise from Lab 1 (Bags of apples).
*
* Author: Mike Kim
* Date: May 27th, 2022
*/

#include <stdio.h>
#include <math.h>

 int main(void) 
{
	int numapples, applePerBag, numBags, leftover;
	int result = 0;
	
	printf("Please, enter the number of apples available and the number of apples each bag holds: ");
	
	while ((result =scanf("%d", &numapples) == 1)) {
		scanf("%d", &applePerBag);
		printf("Number of apples availbale => %d, number of apples each bag holds => %d \n", numapples, applePerBag); 
		numBags = (numapples / applePerBag);
		leftover = (numapples % applePerBag);
		printf("Number of bags produced => %d, number of apples left over => %d \n", numBags, leftover);
		printf("Please, enter the number of apples available and the number of apples each bag holds: ");
	}
	
	printf("Done.\n");
	
	return 0;
}

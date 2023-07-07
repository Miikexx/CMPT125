/*
* Filename: reverse.c
*
* Description: This is the third exercise from Lab #2.
*
* Author: Mike Kim
* Date: June 1st, 2022
*/

#include <stdio.h>

int main(void) {

	int userIntInput[10];
	int reverseIndex;
	printf("Please, enter 10 integers then press Enter: ");
	
	for (int tally = 0; tally < 10; tally++) {
		scanf("%d", &userIntInput[tally]);
		}
	
	printf("Content of array before reversing: ");
	for(int tally = 0; tally <10; ++tally) {
		printf("%d ", userIntInput[tally]);
		}
	
	printf("\n");
	
	// Reversing process
	printf("Content of array after reversing: ");
	

	for(int tally = 0; tally < 10/2;++tally) {
		reverseIndex = userIntInput[tally];
		userIntInput[tally] = userIntInput[10-tally-1];
		userIntInput[10-tally-1] = reverseIndex;
		}
		
	for(int tally = 0; tally <10; ++tally) {
		printf("%d ", userIntInput[tally]);
		}
		
	printf("\n");
	
	return 0;
	}

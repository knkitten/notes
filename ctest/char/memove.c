#include <stdlib.h>  /* malloc */
#include <string.h>  /* memcpy */
#include <stdio.h>   /* printf */


int main()
{
	/* 
	 * Concatenate two byte arrays into third 
	 */
	unsigned char barr1[] = {'1', '2', '3', '4'}; 
	unsigned char barr2[] = {'5', '6', '7', '8', '9'};
	int size_barr1 = sizeof(barr1);
	int size_barr2 = sizeof(barr2);
	int size_barrc = size_barr1 + size_barr2;

	/* Step 1: Initialize third array */
	unsigned char *barrc = malloc(size_barrc);
	/* barrc = {0, 0, 0, 0, 0, 0, 0, 0, 0} */

	/* Step 2: Copy first array to begin third */
	memcpy(barrc, barr1, size_barr1);
	/* barrc = {'1', '2', '3', '4', 0, 0, 0, 0, 0} */

	/* Step 3: Copy second array to end first inside third */
        memcpy(barrc + size_barr1, barr2, size_barr2);
	/* barrc = {'1', '2', '3', '4', '5', '6', '7', '8', '9'} */

	/* Print third array */
	for(int i=0; i<size_barrc; i++) {
		printf("idx: %d, val: %c\n", i, barrc[i]);
	}
	printf("\n");

	return 0;
}


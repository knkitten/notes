#include <stdio.h>
#include <openssl/rand.h>


int main()
{
	unsigned char barr[32];

	RAND_bytes(barr, 32);

	for(int i=0; i<sizeof(barr); i++) {
		printf("%x", barr[i]);
	}
	printf("\n");

	return 0;
}


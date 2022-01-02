#include <stdio.h>

#define MAXBUFLEN 1000000

char source[MAXBUFLEN + 1];

int main()
{

    FILE *fp = fopen("foo.txt", "r");


    size_t newLen;
	if (fp != NULL) {
	    newLen = fread(source, sizeof(char), 114, fp);
	    if ( ferror( fp ) != 0 ) {
		fputs("Error reading file", stderr);
	    } else {
		source[newLen++] = '\0'; /* Just to be safe. */
	    }

	    fclose(fp);
	    
	}
	for(int i=0; i<newLen; i++){
		printf("%c", source[i]);
	}
	printf("\n");
	
	return 0;
}

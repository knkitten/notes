#include <stdio.h>


int main()
{
	char a = 'a';
	char *pa = &a;
	char b[] = {'a', 'b', 'c'};
	int bb[] = {1,2,3};
	char (*bp)[] = &b;

	printf("char a: %c\n", a);
	printf("pointer to char (char *p): %p\n", pa);
	printf("array of chars ---begin for printf---\n");
	for(int i=0; i < sizeof b; i++)
	{
		printf("char %c and his idx %d\n", b[i], i);
	}
	printf("---end---\n");
	printf("%p pointer to array of chars and first elem is %c\n", bp, (*bp)[0]);
	printf("pointer to first elem is %p\n", &(*bp)[0]);
	printf("sizeof %ld %ld \n", sizeof(b), sizeof b);
	printf("sizeof %ld %ld \n", sizeof(bb), sizeof bb);


	unsigned char buf[4];
	printf("unsigned char sizeof %ld\n", sizeof(buf));

	return 0;

}

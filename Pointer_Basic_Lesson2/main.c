#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int main(int argc, char *argv[])
{
	int num = 0xffff0000;
	int *p_int;
	char *p_char;
	p_int= &num;
	p_char= &num;
	printf("Address of number is : %d", &num);
	printf("\nAddress of pointer int is : %d", &p_int);
	printf("\nAddress of pointer char is : %d", &p_char);
	return 0;
}

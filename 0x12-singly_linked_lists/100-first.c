#include <stdio.h>
#include <stdlib.h>

/**
 * turtle - prints before main
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

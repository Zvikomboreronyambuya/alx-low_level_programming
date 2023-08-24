#include <stdio.h>
#include <stdlib.h>

/**
 * print_intro  - This function is a constructor attribute, so it is executed
 *               before the main function. It prints out a couple of lines
 *               from a poem.
 */

void __attribute__((constructor)) print_intro(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

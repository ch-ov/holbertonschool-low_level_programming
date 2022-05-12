#include "lists.h"
/**
 * myStartupFun - Function call before main
 */
void myStartupFun(void) __attribute__ ((constructor));
/**
 * myStartupFun - Function call before main
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

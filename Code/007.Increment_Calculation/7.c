/*Increment operator*/
#include <stdio.h>
main()
{
	int a=5,b,c,i=10;
	b=a++;
	c=++b;

	printf("a = %d, b = %d, c = %d\n",a,b,c);
	printf("i,i++,i++ = %d,%d,%d\n",i,i++,i++);
	//++i is pre increment, it increments i's value by 1 before the operation
	printf("%d\n",++i);
	printf("%d\n",--i);
	//i++ is post increment, it increments i's value by 1 after the operation is over
	printf("%d\n",i++);
	printf("%d\n",i--);
	printf("%d\n",-i++);
	printf("%d\n",-i--);
}
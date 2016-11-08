/* Input two numbers, output the product */
#include <stdio.h>
main()
{
		int x,y,m;				/* Declare three integer variables*/
		printf("Please input x and y\n");	/* Print out the message */
		scanf("%d%d",&x,&y);			/* Read in two numbers, and assign the values to variables x and y */
		m=x*y;					/* Calculate the product of two numbers, and assign the result to variable m */
		printf("%d * %d = %d\n",x,y,m);		/* Print out the result */
}
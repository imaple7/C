/* Input two float numbers, output the bigger one */
#include <stdio.h>
main()
{
	float x,y,c;				/* Declare two float variable */
	printf("Please input x and y:\n");	/* Show message that let user types in two input numbers*/
	scanf("%f%f",&x,&y);
	c=x>y?x:y;				/* Calculate c=max(x, y) */
	printf("MAX of (%f,%f) is %f",x,y,c);	/* Print out the result in variable c */
}
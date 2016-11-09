/* Show the size of different variables in c*/
#include <stdio.h>
void main()
{
    /* sizeof() generates the size of a variable or datatype */
    /* it measured in the number of char size storage units required for the type.*/
    /* The construct sizeof(char) is guaranteed to be 1*/
	
	//The size of datatype is compiler dependent
    printf("The bytes of the variables are:\n");
	//The size of int is 8 in 64bit OS, 4 in 32bit OS, and 2 in 16bit OS
    printf("int:%d bytes\n",sizeof(int));
    /* The size of char is 1 */
    printf("char:%d byte\n",sizeof(char));
    /* The size of short is 2 */
    printf("short:%d bytes\n",sizeof(short));
    /* The size of long is 4 */
    printf("long:%d bytes\n",sizeof(long));
    /* The size of float is 4 */
    printf("float:%d bytes\n",sizeof(float));
    /* The size of double is 8 */
    printf("double:%d bytes\n",sizeof(double));
    /* The size of long double is 8, or 10, or 12 */
    printf("long double:%d bytes\n",sizeof(long double));
}
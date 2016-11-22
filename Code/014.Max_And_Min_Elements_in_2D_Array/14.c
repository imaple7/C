#define MAXN 20
int a[MAXN][MAXN];
main()
{
	int min,	/* The minimum element in the array */
	    max;	/* The maximum element in the array */
	int row,col,n;
	clrscr();
    /* ÊGet the user input to build a matrix */
	printf("Please input the order of the matrix:\n");	scanf("%d",&n);
	printf("Please input the elements of the matrix,\n from a[0][0] to a[%d][%d]:\n",n-1,n-1);
	for(row=0;row<n;row++)
		for(col=0;col<n;col++)
			scanf("%d",&a[row][col]);
	for(min=a[0][0],row=0;row<n;row++)
	{
		/* Assume the first element is min as well as max, try every element in the matrix */
		for(max=a[row][0],col=1;col<n;col++)
			if(max<a[row][col])
				max=a[row][col];
		if(min>max)/* try every element */
			min=max;
	}
	printf("The minimum of maximum number is %d\n",min);
	for(max=a[0][0],row=0;row<n;row++)
	{
        //Calcualte the maximum of minimum number
		for(min=a[row][0],col=1;col<n;col++)
			if(min>a[row][col])
				min=a[row][col];
		if(max<min)
			max=min;
	}
	printf("The maximum of minimum numbers is %d\n",max);
	printf("\nPress any key to quit...\n");
	getch();
}

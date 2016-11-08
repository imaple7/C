#include <stdio.h>
main()
{
	char ch,nch;
	int count;
	int k;

	//Get the input string
	printf("Please input a string with a # in the end.\n");
	scanf("%c",&ch);
	
	//Use loop the get the character untill reaching symbol #
	while(ch != '#')
	{
		//Determine the first character of the string
		if(ch >= '0' && ch <= '9')
		{
			/* */
			count = ch-'0'+1;
			scanf("%c",&nch);
			for(k=0;k<count;k++)
				printf("%c",nch);
		}
		else
			printf("%c",ch);	
		printf(" ");			
		scanf("%c",&ch);		
	}
	printf("#\n");
}
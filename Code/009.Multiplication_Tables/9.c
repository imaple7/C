#include <stdio.h>
#include <conio.h>

#define COLMAX 10
#define ROWMAX 12


int main()
{
 int row, column, y, i, j;
  //clrscr();
   row = 1;
   printf("------------------------------------------------------------");
   printf("\n\t\tMultiplication Table from 1 - 12");
   printf("\n------------------------------------------------------------");
   printf("\n      ");
  
   for(i = 1; i <= COLMAX; i++)
      printf("%4d", i);
   printf("\n-----------------------------------------------------\n");
   do //outer loop for 1 - 12
   {
    column = 1;
    printf("%4d |",row);
      do  //inner loop for 1 - 10
      {
      
       y = row * column;
         printf("%4d", y);  //formating string
         column++;      //for the table of each row
      }while(column <= COLMAX);  //inner loop ends

      printf("\n");
      row++; //next row
   }while(row <= ROWMAX);

   printf("----------------------------------------------------------");
   getch();
   return 0;
}
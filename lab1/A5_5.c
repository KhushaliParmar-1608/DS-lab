// WAP to check for the leap year. 

#include <stdio.h>
void main()
{
    int y;
     printf("Enter the year : ");
    scanf("%d" , &y);
      if((y%400==0)||(y%4==0)&&(y%100!=0))
      {
        printf( "Given year is leap ");
      }  
      else
      {
        printf("Given year is not leap ");
      }
    }

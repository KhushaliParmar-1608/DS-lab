//WAP to convert seconds into hours, minutes & seconds and print in HH:MM:SS 
//[e.g. 10000 seconds mean 2:46:40 (2 Hours, 46 Minutes, 40 Seconds)].

# include <stdio.h>
void main()
{
    int second;
    int minute;
    int hour;
    printf("Enter the seconds : ");
    scanf("%d" , &second);

    hour = second /3600;
    second = second % 3600;

    minute = second /60;
    second = second % 60;

    printf("hours : %d \n" , hour);
    printf("minutes : %d \n" , minute);
    printf("seconds : %d \n" , second);


}
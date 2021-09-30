// According to the Gregorian calendar, it was Monday on the date
01/01/01. If any year is input through the keyboard write a program
to find out what is the day on 1st January of this year.//



#include<stdio.h>
int main()
{
    int leapdays,firstday,yr;
    long int normaldays,totaldays;

    printf("Enter year:");
    scanf("%d",&yr);
    
    normaldays=(yr-1)*365;
    leapdays=(yr-1)/4-(yr-1)/100+(yr-1)/400;
    totaldays=normaldays+leapdays;
    
    firstday=totaldays%7;

    
    switch(firstday)
    {
        case 0:
            printf("Monday");
        break;
        case 1:
            printf("Tuesday");
        break;
        case 2:
            printf("Wednesday");
        break;
        case 3:
            printf("Thursday");
        break;
        case 4:
            printf("Friday");
        break;
        case 5:
            printf("Saturday");
        break;
        case 6:
            printf("Sunday");
        break;
        default:
            printf("Error");
    }        
    return 0;
}

//Write a program to find out the day of week.
#include<stdio.h>
int main()
{
	int day;
	printf("Enter the day number of week: ");
	scanf("%d", &day);
 // Switch statement to determine the day of the week based on the input number
    switch(day)
    {
        case 1:
            // If day number is 1, print "Sunday"
            printf("Sunday");
            break;
        case 2:
            // If day number is 2, print "Monday"
            printf("Monday");
            break;
        case 3:
            // If day number is 3, print "Tuesday"
            printf("Tuesday");
            break;
        case 4:
            // If day number is 4, print "Wednesday"
            printf("Wednesday");
            break;
        case 5:
            // If day number is 5, print "Thursday"
            printf("Thursday");
            break;
        case 6:
            // If day number is 6, print "Friday"
            printf("Friday");
            break;
        case 7:
            // If day number is 7, print "Saturday"
            printf("Saturday");
            break;    
        default:
            // If the input day number is not between 1 and 7, print an error message
            printf("There are only 7 days in a week.");                
    }
	return 0;
}

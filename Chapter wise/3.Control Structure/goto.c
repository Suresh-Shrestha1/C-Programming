//Write a program that uses goto to jump over a part of the code.
#include <stdio.h>

int main() {
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num > 5){
    	    goto skip;
	}

    printf("This won't print.\n");

skip:
    printf("Skipped to here using goto.\n");

    return 0;
}


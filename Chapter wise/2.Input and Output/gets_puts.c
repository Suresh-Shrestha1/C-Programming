//Write a program to read a string using gets() and display it using puts().
#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your full name: ");
    gets(name);     // unsafe(instead of this we use fgets and fputs)
    printf("Name: ");
    puts(name);
    return 0;
}


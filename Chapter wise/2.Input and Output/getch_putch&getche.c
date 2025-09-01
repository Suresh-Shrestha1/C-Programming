//Write a program to demonstrate character input and output using putch(), getch() and getche().
#include <stdio.h>
#include <conio.h>  // required

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getch();  // read character without echo
    printf("\nYou pressed: ");
    putch(ch);     // display character
    
    printf("\n\nEnter a character: ");
    ch = getche();  // read character with echo
    printf("\nYou pressed: %c", ch);
    return 0;
}


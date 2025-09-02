//Write a program to print a menu until the user chooses to exit.
#include <stdio.h>

int main() {
    int choice;
    do {
        printf("1. Hello\n2. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
    } while (choice != 2);

    return 0;
}


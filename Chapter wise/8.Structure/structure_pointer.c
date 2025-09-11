//Write a program using pointer to structure to access data.
#include <stdio.h>

struct Book {
    char title[30];
    float price;
};

int main() {
    struct Book b = {"C Programming", 299.99};
    struct Book *ptr = &b;

    printf("Title: %s\n", ptr->title);
    printf("Price: %.2f\n", ptr->price);
    return 0;
}


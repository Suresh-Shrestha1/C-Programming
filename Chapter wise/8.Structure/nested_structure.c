//Write a program to create a structure for an employee that includes a nested structure for address.
#include <stdio.h>

struct Address {
    char city[20];
    int pincode;
};

struct Employee {
    int id;
    char name[30];
    struct Address addr;
};

int main() {
    struct Employee e = {1, "Bhushan", {"Lalitpur", 400001}};

    printf("ID: %d\nName: %s\nCity: %s\nPincode: %d\n", e.id, e.name, e.addr.city, e.addr.pincode);
    return 0;
}


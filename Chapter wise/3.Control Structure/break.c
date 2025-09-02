//Write a program to stop a loop when number 5 is found.
#include <stdio.h>

int main() {
	int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5){
            break;
		}
        printf("%d\n", i);
    }
    return 0;
}


#include<stdio.h>
int main(){
    int n, fact;
    printf("Enter the number: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("The factorial of %d is %d", n, fact);
    return 0;    
}

// function to calculate factorial using recursion
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}


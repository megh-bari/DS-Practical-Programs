#include <stdio.h>

// Recursive function to calculate GCD
int gcd(int a, int b) {
    if (b == 0) return a; // Base case
    return gcd(b, a % b); // Recursive call
}

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("G.C.D of %d and %d is %d.\n", num1, num2, gcd(num1, num2));
    return 0;
}

// How to run:

// gcc -o gcd gcd.c
// ./gcd

// Output:

// Enter two positive integers: 100 70
// G.C.D of 100 and 70 is 10.
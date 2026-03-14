#include<stdio.h>

int main() {
    int num1, num2, remainder;
    printf("Enter two positive numbers: ");
    scanf("%d %d", &num1, &num2);

    int original_num1 = num1;
    int original_num2 = num2;

    // 2. Loop until the second number becomes 0
    while (num2 != 0) {
        remainder = num1 % num2; 
        num1 = num2;             
        num2 = remainder;        
    }
    printf("The GCD of %d and %d is: %d\n", original_num1, original_num2, num1);

    return 0;
}

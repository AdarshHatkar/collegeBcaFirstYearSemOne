#include <stdio.h>
int main() {
  int inputNumber, reversedNumber = 0, remainder, originalNumber;
    printf("Enter an integer: ");
    scanf("%d", &inputNumber);
    originalNumber = inputNumber;

    // getting reversed number
    while (inputNumber != 0) {
        remainder = inputNumber % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        inputNumber /= 10;
    }

   
    if (originalNumber == reversedNumber)
        printf("%d is a palindrome.", originalNumber);
    else
        printf("%d is not a palindrome.", originalNumber);

    return 0;
}
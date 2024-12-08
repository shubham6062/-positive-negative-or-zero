#include <stdio.h>
#include <stdlib.h>
// Function to check if a number is positive, negative, or zero
const char* checkNumber(int num)
{
    if (num > 0)
    {
        return "Positive";
    } else if (num < 0) {
        return "Negative";
    } else {
        return "Zero";
    }
}
int main()
 {
    int num;
    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);
    // Call the function and display the result
    printf("The number %d is %s.\n", num, checkNumber(num));

}

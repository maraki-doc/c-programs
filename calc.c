#include <stdio.h>
int main() {
    long long int n1,n2, sum;
    char ans;
    printf("Please enter the first number: ");
    scanf("%lld", &n1);
    printf("Please enter the second number: ");
    scanf("%lld", &n2);
    printf("Please enter the equation: ");
    scanf(" %c", &ans);
    if (ans == '+'){
        sum = n1 + n2;
    }
    else {
        sum = n1 - n2;
    }
    printf("The sum of the two numbers is: %lld\n", sum);
    return 0;
}
#include <stdio.h>

int main()
{
    float num1,num2;
    char opt;
    printf("Enter two numbers and enter the operation(+, -, x, /) in between: ");
    scanf("%f %c %f", &num1, &opt, &num2);

    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1*num2;
    double quotient = (double)num1/num2;

    if(opt == '+')
            printf("%.2f + %.2f = %.2f", num1, num2, sum);
    if(opt == '-')
            printf("%.2f - %.2f = %.2f", num1, num2, difference);
    if(opt == 'x')
            printf("%.2f x %.2f = %.4f", num1, num2, product);
    if(opt == '/')
            printf("%.2f / %.2f = %.4lf", num1, num2, quotient);

    return 0;
}
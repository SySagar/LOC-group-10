#include<stdio.h>
void main()
{
    int a, b;
    char op;

    printf("Enter Two numbers and operator\n");
    scanf("%d %d %c", &a, &b, &op);

    switch(op)
    {
        case '+' : printf("Sum is %d\n", (a + b));
        break;
        case '-' : printf("Difference is %d\n", (a - b));
        break;
        case '*' : printf("Product is %d\n", (a * b));
        break;
        case '/' : printf("Division is %d\n", (a / b));
        break;
        case '%' : printf("Remainder is %d\n", (a % b));
        break;

        default: printf("Invalid choice\n");
    }
}
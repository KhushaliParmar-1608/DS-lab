// 68. Write a program for evaluation of prefix Expression using Stack.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top >= MAX - 1)
    {
        printf("\nStack Overflow! Expression khub moti chhe.\n");
        exit(1);
    }
    stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("\nINVALID EXPRESSION: Operands ni kami chhe!\n");
        exit(1);
    }
    return stack[top--];
}

int main()
{
    char prefix[MAX];
    int i, op1, op2, result;

    printf("Enter Prefix Expression: ");
    scanf("%s", prefix);

    for (i = strlen(prefix) - 1; i >= 0; i--)
    {
        if (isdigit(prefix[i]))
        {
            push(prefix[i] - '0');
        }
        else
        {
            op1 = pop();
            op2 = pop();

            switch (prefix[i])
            {
            case '+':
                result = op1 + op2;
                break;

            case '-':
                result = op1 - op2;
                break;

            case '*':
                result = op1 * op2;
                break;

            case '/':
                if (op2 == 0)
                {
                    printf("\nRuntime Error: Zero (0) thi divide na thai sake!\n");
                    return 1;
                }
                result = op1 / op2;
                break;

            case '%':
                if (op2 == 0)
                {
                    printf("\nRuntime Error: Zero (0) thi modulo na thai sake!\n");
                    return 1;
                }
                result = op1 % op2;
                break;

            case '^':
                result = (int)pow(op1, op2);
                break;

            default:
                printf("Invalid Operator Encountered\n");
                return 1;
            }

            push(result);
        }
    }

    if (top != 0)
    {
        printf("\nINVALID EXPRESSION: Extra operands bachi gaya chhe!\n");
        return 1;
    }

    printf("Result = %d\n", pop());

    return 0;
}
// 66. Write a program to convert infix notation to prefix notation using stack.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char S[MAX];
int TOP = -1;

void PUSH(char item)
{
    if (TOP == MAX - 1)
    {
        printf("\nStack Overflow");
        return;
    }

    S[++TOP] = item;
}

char POP()
{
    if (TOP == -1)
        return '\0';

    return S[TOP--];
}

char PEEP()
{
    if (TOP == -1)
        return '\0';

    return S[TOP];
}

int F(char symbol)
{
    switch (symbol)
    {
    case '+':
    case '-':
        return 2;

    case '*':
    case '/':
        return 4;

    case '^':
        return 5;

    case ')':
        return 9;

    case '(':
        return 0;

    default:
        if (isalnum(symbol))
            return 7;
    }

    return -1;
}

int G(char symbol)
{
    switch (symbol)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 3;

    case '^':
        return 6;

    case ')':
        return 0;

    default:
        if (isalnum(symbol))
            return 8;
    }

    return -1;
}

int R(char symbol)
{
    if (isalnum(symbol))
        return 1;

    if (symbol == '+' || symbol == '-' ||
        symbol == '*' || symbol == '/' ||
        symbol == '^')
        return -1;

    return 0;
}

int main()
{
    char INFIX[MAX];
    char REVERSED_INFIX[MAX];
    char PREFIX_TEMP[MAX];
    char NEXT;
    char TEMP;

    int RANK = 0;
    int i = 0;
    int j = 0;

    printf("Enter Infix Expression : ");
    scanf("%s", INFIX);

    int len = strlen(INFIX);

    for (i = 0; i < len; i++)
    {
        REVERSED_INFIX[i] = INFIX[len - 1 - i];
    }
    REVERSED_INFIX[len] = '\0';

    PUSH(')');

    strcat(REVERSED_INFIX, "(");

    PREFIX_TEMP[0] = '\0';

    i = 0;
    NEXT = REVERSED_INFIX[i++];

    while (NEXT != '\0')
    {
        if (F(NEXT) == -1)
        {
            printf("\nINVALID EXPRESSION");
            return 0;
        }

        while (TOP != -1 && G(PEEP()) > F(NEXT))
        {
            TEMP = POP();
            PREFIX_TEMP[j++] = TEMP;
            RANK += R(TEMP);

            if (RANK < 1)
            {
                printf("\nINVALID EXPRESSION");
                return 0;
            }
        }

        if (TOP < 0)
        {
            printf("\nINVALID EXPRESSION");
            return 0;
        }

        if (G(PEEP()) != F(NEXT))
        {
            PUSH(NEXT);
        }
        else
        {
            POP();
        }

        NEXT = REVERSED_INFIX[i++];
    }

    PREFIX_TEMP[j] = '\0';

    if (TOP != -1 || RANK != 1)
    {
        printf("\nINVALID EXPRESSION");
    }
    else
    {
        printf("\nPrefix Expression : ");
        for (i = strlen(PREFIX_TEMP) - 1; i >= 0; i--)
        {
            printf("%c", PREFIX_TEMP[i]);
        }
        printf("\n");
    }

    return 0;
}
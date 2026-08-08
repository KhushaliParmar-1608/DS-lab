// 74. WAP to implement Priority Queue.
#include <stdio.h>

#define MAX 10

int pq[MAX];
int size = 0;

void enqueue(int value)
{
    if (size == MAX)
    {
        printf("Priority Queue Overflow! Cannot insert %d\n", value);
        return;
    }

    int i = size - 1;
    while (i >= 0 && pq[i] < value)
    {
        pq[i + 1] = pq[i];
        i--;
    }

    pq[i + 1] = value;
    size++;

    printf("%d inserted successfully into Max Priority Queue.\n", value);
}

void dequeue()
{
    if (size == 0)
    {
        printf("Priority Queue Underflow!\n");
        return;
    }

    printf("Deleted Max Priority Element: %d\n", pq[0]);

    for (int i = 0; i < size - 1; i++)
    {
        pq[i] = pq[i + 1];
    }

    size--;
}

void display()
{
    if (size == 0)
    {
        printf("Max Priority Queue is Empty.\n");
        return;
    }

    printf("\n--- Max Priority Queue (Descending Order) ---\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", pq[i]);
    }
    printf("\n--------------------------------------------\n");
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n----- Max Priority Queue Menu -----\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Value: ");
            scanf("%d", &value);
            enqueue(value);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}
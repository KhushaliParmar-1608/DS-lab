#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL; // Golobal variable

void creatNode()
{
    struct node *new, *temp;
    int n, i;

    printf("Enter number of nodes : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));

        printf("Enter info : ");
        scanf("%d", &new->info);

        new->link = NULL;

        if (first == NULL)
        {
            first = new;
        }
        else
        {
            temp = first;

            while (temp->link != NULL)
            {
                temp = temp->link;
            }

            temp->link = new;
        }
    }
}

void display()
{
    struct node *temp;

    if (first == NULL)
    {
        printf("Linked List is Empty.\n");
        return;
    }

    temp = first;

    printf("\nLinked List : ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }

    printf("NULL\n");
}

void insertAtFriest()
{
    struct node *new;
    int x;

    new = (struct node *)malloc(sizeof(struct node));

    printf("Enter X : ");
    scanf("%d", &x);

    new->info = x;

    new->link = first;

    first = new;

    temp = first;
    while (temp != NULL)
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }

    printf("NULL");
}

void deleteFirst()
{
    struct node *temp;

    if (first == NULL)
    {
        printf("Linked List is Empty.");
    }
    else
    {
        temp = first;
        first = first->link;
        free(temp);

        printf("First Node Deleted.");
    }

    temp = first;
    while (temp != NULL)
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }

    printf("NULL");
}
void insertAtLast()
{
    struct node *new, *temp;
    int x;

    new = (struct node *)malloc(sizeof(struct node));

    printf("Enter X : ");
    scanf("%d", &x);

    new->info = x;
    new->link = NULL;

    if (first == NULL)
    {
        first = new;
    }
    else
    {
        temp = first;

        while (temp->link != NULL)
        {
            temp = temp->link;
        }

        temp->link = new;
    }

    temp = first;
    while (temp != NULL)
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }

    printf("NULL");
}

void deleteLast()
{
    struct node *temp, *prev;

    if (first == NULL)
    {
        printf("Linked List is Empty.\n");
    }
    else if (first->link == NULL)
    {
        free(first);
        first = NULL;

        printf("Last Node Deleted.");
    }
    else
    {
        temp = first;

        while (temp->link != NULL)
        {
            prev = temp;
            temp = temp->link;
        }

        prev->link = NULL;
        free(temp);

        printf("Last Node Deleted.");
    }

    temp = first;
    while (temp != NULL)
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }

    printf("NULL");
}

void deletePosition()
{
    struct node *temp, *prev;
    int p, i;

    printf("Enter Position : ");
    scanf("%d", &p);

    if (first == NULL)
    {
        printf("Linked List is Empty.");
    }
    else if (p == 1)
    {
        temp = first;
        first = first->link;
        free(temp);
    }
    else
    {
        temp = first;

        for (i = 1; i < p; i++)
        {
            prev = temp;
            temp = temp->link;

            if (temp == NULL)
            {
                printf("Invalid Position.");
                return;
            }
        }

        prev->link = temp->link;
        free(temp);
    }

    temp = first;
    while (temp != NULL)
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }

    printf("NULL");
}

void countNode()
{
    struct node *temp;
    int count = 0;

    temp = first;

    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }

    printf("Total Nodes = %d\n", count);
}

void main()
{
    int ch = 0;

    while (ch != 9)
    {
        printf("Chooce any one \n")
            printf("1. Create Node \n");
        printf("2. Display \n");
        printf("3. Insert At First \n");
        printf("4. Delete First \n");
        printf("5. Insert At Last \n");
        printf("6. Delete Last \n");
        printf("7. Delete Position \n");
        printf("8. Count Nodes \n");
        printf("9. Exit \n");

        printf("Enter Your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            creatNode();
            break;

        case 2:
            display();
            break;

        case 3:
            insertAtFriest();
            break;

        case 4:
            deleteFirst();
            break;

        case 5:
            insertAtLast();
            break;

        case 6:
            deleteLast();
            break;

        case 7:
            deletePosition();
            break;

        case 8:
            countNode();
            break;

        case 9:
            printf("Program End.");
            break;

        default:
            printf("Invalid Choice.");
        }
    }
}
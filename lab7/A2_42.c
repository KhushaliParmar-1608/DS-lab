#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;

struct node *createNode()
{
    struct node *newnode;
    int x;

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }

    printf("Enter info : ");
    scanf("%d", &x);

    newnode->info = x;
    newnode->link = NULL;

    return newnode;
}

void display()
{
    struct node *temp = first;

    if (temp == NULL)
    {
        printf("List is Empty");
        return;
    }

    printf("Linked List : ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }

    printf("NULL");
}

/* -------- CREATE LIST -------- */
void createList()
{
    int n, i;
    struct node *newnode, *temp;

    printf("Enter number of nodes : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        newnode = createNode();

        if (first == NULL)
        {
            first = newnode;
        }
        else
        {
            temp = first;

            while (temp->link != NULL)
            {
                temp = temp->link;
            }

            temp->link = newnode;
        }
    }

    display();
}

/* -------- INSERT FIRST -------- */
void insertFirst()
{
    struct node *newnode = createNode();

    newnode->link = first;
    first = newnode;

    display();
}

/* -------- INSERT LAST -------- */
void insertLast()
{
    struct node *newnode = createNode();
    struct node *temp;

    if (first == NULL)
    {
        first = newnode;
    }
    else
    {
        temp = first;

        while (temp->link != NULL)
        {
            temp = temp->link;
        }

        temp->link = newnode;
    }

    display();
}

/* -------- DELETE FIRST -------- */
void deleteFirst()
{
    struct node *temp;

    if (first == NULL)
    {
        printf("List is Empty");
        return;
    }

    temp = first;
    first = first->link;
    free(temp);

    display();
}

/* -------- DELETE LAST -------- */
void deleteLast()
{
    struct node *temp, *prev;

    if (first == NULL)
    {
        printf("List is Empty");
        return;
    }

    if (first->link == NULL)
    {
        free(first);
        first = NULL;
        display();
        return;
    }

    temp = first;

    while (temp->link != NULL)
    {
        prev = temp;
        temp = temp->link;
    }

    prev->link = NULL;
    free(temp);

    display();
}

/* -------- DELETE POSITION -------- */
void deletePosition()
{
    struct node *temp, *prev;
    int p, i;

    printf("Enter position : ");
    scanf("%d", &p);

    if (first == NULL)
    {
        printf("List is Empty");
        return;
    }

    temp = first;

    if (p == 1)
    {
        first = first->link;
        free(temp);
        display();
        return;
    }

    for (i = 1; i < p; i++)
    {
        prev = temp;
        temp = temp->link;

        if (temp == NULL)
        {
            printf("Invalid Position");
            return;
        }
    }

    prev->link = temp->link;
    free(temp);

    display();
}

/* -------- COUNT NODES -------- */
void countNode()
{
    struct node *temp = first;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }

    printf("Total Nodes = %d", count);
}

/* -------- MAIN FUNCTION -------- */
int main()
{
    int ch = 0;

    while (1)
    {
        printf("\n----- MENU -----");
        printf("\n1. Create List");
        printf("\n2. Display");
        printf("\n3. Insert First");
        printf("\n4. Insert Last");
        printf("\n5. Delete First");
        printf("\n6. Delete Last");
        printf("\n7. Delete Position");
        printf("\n8. Count Nodes");
        printf("\n9. Exit");

        printf("\nEnter choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            createList();
            break;
        case 2:
            display();
            break;
        case 3:
            insertFirst();
            break;
        case 4:
            insertLast();
            break;
        case 5:
            deleteFirst();
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
            exit(0);
        default:
            printf("Invalid Choice");
        }
    }
}
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *Top = NULL;

void push(int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = Top;
    Top = newnode;
}

void pop()
{
    if (Top == NULL)
    {
        cout << "Stack is empty\n";
    }
    else
    {
        struct node *temp = Top;
        cout << "Deleted element: " << temp->data << endl;
        Top = Top->next;
        free(temp);
    }
}

void display()
{
    if (Top == NULL)
    {
        cout << "Stack is Empty\n";
    }
    else
    {
        struct node *temp = Top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main()
{
    int choice, value;
    while (1)
    {
        cout << "1. Push\n2. Pop\n3. Display\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the Value to Insert: ";
            cin >> value;
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            return 0;
        }
    }
    return 0;
}

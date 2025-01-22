#include <iostream>
using namespace std;
//what is Stack?
    /* Stack is a linear Data Structure.It work in the principle of LIFO(last in first out
    */
//Stack Implementation in Singly Linkedlist
struct node
{
    int data; //data part
    struct node *next; //address of another node
} *Top = NULL;//head part

//Push the value to the top of the stack
void push(int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = Top;
    Top = newnode;
}

//Pop(delete) the value from the top of the stack
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
//Display the value from last to first
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
/*
STACK Representation 

|______|
|__60__|
|__70__|
|__50__|
|__20__|
|__10__|
|__15__|

Pop()
|______|
|__70__|
|__50__|
|__20__|
|__10__|
|__15__|

push(90)
|______|
|__90__|
|__70__|
|__50__|
|__20__|
|__10__|
|__15__|

Display 

90 70 50 20 10 15

*/
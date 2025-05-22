#include <iostream>
using namespace std;

//node class representing a single node in the linked list
class node
{
    public:
    int data;
    node *next;

    node()
    {
        next = NULL;
    }
};

//stack class
class stack
{
    private:
    node *top;  //pointer to the top node of the stack

    public:
    stack()
    {
        top = NULL; //initialize the stack with a null top pointer
    }

    //push operation insert an element onto the top of the stack
    int push(int value)
    {
        node* newNode = new node(); //1. allocate memory for the new node
        newNode->data = value; //2. assign value
        newNode->next = top; //3. set the next pointer of the new node to the current top
        top = newNode; //4. update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }
    //pop operation: remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }

        node* temp = top; //create a temporary pointer to the top node
        top = top->next; //update the top pointer to the next node
        cout << "Popped value: " << top->data << endl; 
    }

    //peek/top operation: revtrieve the value of the topmost element without removing
    void peek()
    {
        if (top == NULL)
        {
            cout << "List is empty." << endl;
        }
        else
        {
            node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } //return the value of the top node
    }

    //isEmpty opperation: check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; //return true if the top pointer is NULL, indicating an
    }
};

int main()
{
    stack stack;

    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                stack.push(value); //push the entered value onto the stack
                break;
            case 2:
                if (stack.isEmpty())
                {
                    stack.pop(); //pop the top element from the stack
                }
                else
                {
                    cout << "Satck is empety. cannot pop." << endl;
                }
                break;
            case 3:
                if (!stack.isEmpty())
                {
                    stack.peek(); //get the value of the top element
                }
                else
                {
                    cout << "Stack is empty. No top value." << endl;
                }
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
        }
    }
}
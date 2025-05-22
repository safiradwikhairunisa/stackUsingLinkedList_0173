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
    
}
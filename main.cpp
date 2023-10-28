#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};

Node *top = nullptr;

bool isEmpty()
{
    if(top == nullptr)
        return true;
    else
        return false;
}

void push(int value)
{
    Node *temp = new Node();
    temp->data = value;
    temp->link = top;
    top = temp;
}

void poop()
{
    if(isEmpty())
        cout << "Empty";
    else
    {
        Node *ptr = top;
        top = top->link;
        delete ptr;
    }
}

void peek()
{
    if(isEmpty())
        cout << "Empty";
    else{
        cout << "Top is: " << top->data << endl;
    }
}

int main()
{
    int choice;
    bool loop;
do{
    cout << "======================\n";
    cout << "[1] Push            ||\n[2] Poop            ||\n[3] Peek            ||\n[4] Exit            ||" << endl;
cout << "======================\n";
    cin >> choice;
    switch(choice){
    case 1:
        int input;
        cout << "Enter: ";
        cin >> input;
        push(input);
        break;
    case 2:
        poop();
        break;
    case 3:
        peek();
        break;
    case 4:
        loop = false;
    default:
        cout << "Invalid";
        break;
    }
}while (loop);
    return 0;
}

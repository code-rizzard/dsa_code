#include <iostream>


using namespace std;




struct Node {
    int data;
    Node *link;
};

Node *top = nullptr;


void push(int n){
    Node* temp = new Node();
    temp->data = n;

    temp->link = top;
    top = temp;

    cout << "Pushed" << endl;
}

void pop() {
    if(top == nullptr) {

        cout << "Stack is empty.";
        return;

    }
    Node *ptr = top;
    top = top->link;
    delete ptr;


}

void peek() {
     if (top == nullptr) {
        cout << "Stack is empty.";
        return;
     }
     cout << "Top value is: " << top->data;
}


int main()
{
    bool loop = true;
    do {
        int opt;
        cout <<"1. Push\n2. Pop\n3. Peek\n4.Exit" << endl;
        cin >> opt;
        switch(opt) {
        case 1:
            int value;
            cout << "Input value: ";
            cin >> value;
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            loop = false;
            break;
        default:
            cout << "Invalid option.";
            break;
        }
        cout << endl << endl;
    } while(loop);
    return 0;
}

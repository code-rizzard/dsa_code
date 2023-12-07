#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *first = nullptr;
Node *last = nullptr;

void enqueue(int data)
{
    Node *tmp = new Node();
    tmp->data = data;
    tmp->next = nullptr;

    if (first == nullptr)
    {
        first = tmp;
        last = tmp;
        first->next = last;
        return;
    }

    last->next = tmp;
    last = tmp;
}

void dequeue()
{
    if (first == nullptr)
    {
        cout << "Queue is empty.";
        return;
    }
    if (first == last)
    {
        first = nullptr;
        last = nullptr;

        return;
    }
    Node *tmp = first;
    first = tmp->next;
}

void peek()
{
    if (first == nullptr)
    {
        cout << "Queue is empty.";
        return;
    }
    cout << "First: " << first->data;
}

void showAll()
{
    if (first == nullptr)
    {
        cout << "Queue is empty.";
        return;
    }
    Node *tmp = first;
    cout << "The data is: ";
    do
    {
        cout << tmp->data << "< ";
        tmp = tmp->next;
    } while (tmp != nullptr);
}

int main()
{
    bool loop = true;
    do
    {
        int opt;
        cout << "1. Push\n2. Dequeue\n3. Peek\n4.Show All \n5.Exit" << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            int value;
            cout << "Input value: ";
            cin >> value;
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            showAll();
            break;
        case 5:
            loop = false;
            break;
        default:
            cout << "Invalid option.";
            break;
        }
        cout << endl
             << endl;
    } while (loop);

    return 0;
}

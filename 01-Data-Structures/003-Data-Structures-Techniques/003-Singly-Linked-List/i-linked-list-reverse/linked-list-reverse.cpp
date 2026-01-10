#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insertValueAtTail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;

        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void reverseLinkedList(Node *&head, Node *&tail, Node *temp)
{
    if (temp->next == NULL)
    {
        head = temp;
        return;
    }

    reverseLinkedList(head, tail, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }

        insertValueAtTail(head, tail, value);
    }

    reverseLinkedList(head, tail, head);
    printLinkedList(head);

    return 0;
}
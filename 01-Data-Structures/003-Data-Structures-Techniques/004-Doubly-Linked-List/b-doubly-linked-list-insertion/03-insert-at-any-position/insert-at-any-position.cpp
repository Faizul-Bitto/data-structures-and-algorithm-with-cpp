#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;

        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtAnyPosition(Node *&head, int index, int value)
{
    Node *newNode = new Node(value);

    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;

    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtTail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;

        return;
    }

    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void printForward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}

void printBackward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }

    cout << endl;
}

int main()
{
    Node *head = new Node(20);
    Node *a = new Node(30);
    Node *tail = new Node(40);

    head->next = a;

    a->prev = head;
    a->next = tail;

    tail->prev = a;

    insertAtHead(head, tail, 10);
    insertAtAnyPosition(head, 2, 100);
    insertAtTail(head, tail, 50);
    printForward(head);
    printBackward(tail);

    return 0;
}
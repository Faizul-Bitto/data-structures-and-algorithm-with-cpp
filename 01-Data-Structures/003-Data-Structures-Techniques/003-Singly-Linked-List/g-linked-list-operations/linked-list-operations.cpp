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

void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
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
    temp->next = newNode;
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
    tail->next = newNode;
    tail = newNode;
}

void printLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void printReverse(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    printReverse(temp->next);
    cout << temp->value << " ";
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

        insertAtTail(head, tail, value);
    }

    insertAtHead(head, 10);
    insertAtAnyPosition(head, 2, 200);
    insertAtTail(head, tail, 500);
    printLinkedList(head);

    cout << endl;
    printReverse(head);

    return 0;
}
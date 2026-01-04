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

void deleteAtHead(Node *&head)
{
    Node *newNode = head;
    head = newNode->next;
    delete newNode;
}

void deleteAtAnyPosition(Node *&head, int index)
{
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void deleteAtTail(Node *&head, Node *&tail, int index)
{
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    tail = temp;
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

    deleteAtHead(head);
    deleteAtAnyPosition(head, 2);
    deleteAtTail(head, tail, 2);
    printLinkedList(head);

    return 0;
}
Q: .Construct a new linked list by merging alternate nodes of two lists for example in list 1 we have {1,2,3} and in list 2 we have {4,5,6} in the new list we should have {1,4,2,5,3,6}
Code:-

#include <stdio.h>
#include <stdlib.h>
// Data Structure to store a linked list node
struct Node
{
int data;
struct Node* next;
};
// Helper function to print given linked list
void printList(struct Node* head)
{
struct Node* ptr = head;
while (ptr)
{
printf("%d -> ", ptr->data);
ptr = ptr->next;
}
printf("NULL\n");
}
// Helper function to insert new Node in the beginning of the linked list
void push(struct Node** head, int data)
{
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = *head;
*head = newNode;
}
// Function to construct a linked list by merging alternate nodes of
// two given linked lists using dummy node
struct Node* ShuffleMerge(struct Node* a, struct Node* b)
{
struct Node dummy;
struct Node* tail = &dummy;
dummy.next = NULL;
while (1)
{
// empty list cases
if (a == NULL)
{
tail->next = b;
break;
}
else if (b == NULL)
{
tail->next = a;
break;
}
// common case: move two nodes to tail
else
{
tail->next = a;
tail = a;
a = a->next;
tail->next = b;
tail = b;
b = b->next;
}
}
return dummy.next;
}
// main method
int main(void)
{
// input keys
int keys[] = { 1, 2, 3, 4, 5, 6, 7 };
int n = sizeof(keys)/sizeof(keys[0]);
struct Node *a = NULL, *b = NULL;
for (int i = n - 1; i >= 0; i = i - 2)
push(&a, keys[i]);
for (int i = n - 2; i >= 0; i = i - 2)
push(&b, keys[i]);
// print both linked list
printf("First List : ");
printList(a);
printf("Second List : ");
printList(b);
struct Node* head = ShuffleMerge(a, b);
printf("After Merge : ");
printList(head);
return 0;
}

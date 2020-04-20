Q: write a program to add the first element of one list to another list for example we have {1,2,3} in list 1 and {4,5,6} in list 2 we have to get {4,1,2,3} as output for list 1 and {5,6} for list 2. 
Code: 
 
 
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
// Function take the node from the front of the source, and move it
// to the front of the destination
void MoveNode(struct Node** destRef, struct Node** sourceRef)
{
// if the source list empty, do nothing
if (*sourceRef == NULL)
return;
struct Node* newNode = *sourceRef;// the front source node
*sourceRef = (*sourceRef)->next; // Advance the source pointer
newNode->next = *destRef; // Link the old dest off the new Node
*destRef = newNode; // Move dest to point to the new Node
}
// main method
int main(void)
{
// input keys
int keys[] = { 1, 2, 3 };
int n = sizeof(keys)/sizeof(keys[0]);
// construct first linked list
struct Node* a = NULL;
for (int i = n-1; i >= 0; i--)
push(&a, keys[i]);
// construct second linked list
struct Node* b = NULL;
for (int i = 0; i < n; i++)
push(&b, 2*keys[i]);
// move front node of the b, and move it to the front of the a
MoveNode(&a, &b);
// print both lists
printf("First List : ");
printList(a);
printf("Second List : ");
printList(b);
return 0;
}

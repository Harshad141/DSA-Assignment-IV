Q: Write a program to print the elements in a queue.
    i.in reverse order. 
   ii.in alternate order.
   
Code: 
#include<stdio.h>
#define SIZE 10
void insert(int);
void delete();
int queue[10], f=-1,r=-1;
void main() {
int value, choice;
while(1){
printf("\n\n*** MENU ***\n");
printf("1. Insertion\n2. Deletion\n3. Print Reverse\n4. Print Alternate\n5. Exit");
printf("\nEnter your choice: ");
scanf("%d",&choice);
switch(choice){
case 1: printf("Enter the value to be insert: ");
scanf("%d",&value);
insert(value);
break;
case 2: delete();
break;
case 3:
printf("The Reversed queue is:");
for(int i=SIZE;i>=0;i--)
{
if(queue[i]==0)
continue;
printf("%d ",queue[i]);
}
break;
case 4:
printf("Alternate elements of the queue are:");
for(int i=0;i<SIZE;i+=2)
{
if(queue[i]==0)
continue;
printf("%d ",queue[i]);
}
break;
case 5: exit(0);
default: printf("\nWrong selection!!! Try again!!!");
}
}}
void insert(int value){
if((f==0 &&r == SIZE-1) || f==r+1)
printf("\nQueue is Full!!! Insertion is not possible!!!");
else{
if(f == -1)
f = 0;
r=(r+1)%SIZE;
queue[r] = value;
printf("\nInsertion success!!!");
}}
void delete(){
if(f == -1)
printf("\nQueue is Empty!!! Deletion is not possible!!!");
else{
printf("\nDeleted : %d", queue[f]);
f=(f+1)%SIZE;
if(f == r)
f = r = -1;
}}

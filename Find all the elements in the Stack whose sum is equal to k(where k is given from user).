Q: Find all the elements in the Stack whose sum is equal to k(where k is given from user).
Code:

#include <stdio.h>
int top=-1;
int x;
char stack[100];
void push(int x);
char pop();
int main()
{
int i,n,a,t,k,f,sum=0,count=1;
printf("Enter the number of elements in the stack");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter next element");
scanf("%d",&a);
push(a);
}
printf("Enter the sum to be checked");
scanf("%d",&k);
for(i=0;i<n;i++)
{
t=pop();
sum+=t;
count+=1;
if(sum==k){
for(int j=0;j<count;j++)
printf("%d",stack[j]);
f=1;
break;
}
push(t);
}
if(f!=1)
printf("The elements in the stack dont add up to the sum");
}
void push(int x)
{
if(top==99)
{
printf("\nStack is FULL !!!\n");
return;
}
top=top+1;
stack[top]=x;
}
char pop()
{
if(stack[top]==-1)
{
printf("\nStack is EMPTY!!!\n");
return 0;
}
x = stack[top];
top=top-1;
return x;
}

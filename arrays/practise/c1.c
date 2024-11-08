#include <stdio.h>
#include<stdlib.h>
struct stack{
int data[50];
int sp; 
};
typedef struct stack stack;
void push(stack * st ,int ele){
    if(st->sp==(50-1)){
        printf("Stack is empty");
        return;
    }
    st->sp=st->sp+1;
    st->data[st->sp]=ele;
}

int pop(stack *st){
    int ele;

if(st->sp==-1){
    printf("Stack is empty");
    return -1;
}
ele=st->data[st->sp];
st->sp=st->sp-1;
return ele;
}
int main (){
    int element,choice;
    stack st1;
    printf("Enter the choice ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:

    printf("Enter the element ");
    scanf("%d",&element);
    push(&st1,element);
        break;
    case 2:
    element =pop(&st1);
    if(element!=-1){
        printf("poped elements are %d",element);

    }
    break;
    default:
    printf("invalid choice");
        break;
    }



    return 0;
}

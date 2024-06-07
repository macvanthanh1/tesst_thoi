#include <stdio.h>
#include <stdlib.h>
struct Stack{
    int top;
    int cap;
    int *array;
};
typedef struct Stack stack;
stack *create_stack(int n){
    stack *temp=(stack*)malloc(sizeof(stack));
    temp->top=-1;
    temp->cap=n;
    temp->array=(int*)malloc(n*sizeof(int));
    return temp;
}
int isfull(stack *p){
    return p->top == p->cap;
}
int isempty(stack *p){
    return p->top == -1;
}
void push(stack *p,int value){
    if(isfull(p) == 1){
        return;
    }
    p->array[++p->top]=value;
}
void pop(stack *p){
    if(isempty(p)==1){
        return;
    }
    (p)->top--;
    (p)->cap--;
}
void output(stack *p){
    for(int i=0;i<p->cap;i++){
        printf("%d ",p->array[p->top--]);
    }
}
int main(){
    
    int n,a;
    scanf("%d",&n);
    stack* p=create_stack(n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        push(p,a);
    }
    pop(p);
    pop(p);
    output(p);
}
    

#include<iostream>
   
using namespace std;

#define MAX 10

struct Stack{
    int items[MAX];
    int top;
};

bool isEmpty(Stack** stk){
    if((*stk)->top == -1){
        cout << "the stack is empty" << endl;
        return true;
    }
   return false;
}

void createAnEmptyStack(Stack** stk){
    *stk = new Stack(); 
    (*stk)->top = -1;
}

void push(Stack** stk, int data){
    (*stk)->top = (*stk)->top + 1;
    
    (*stk)->items[(*stk)->top] = data;
    
}

int pop(Stack** stk){
    if(isEmpty(stk)){
       cout << "you can't pop" << endl;
       return -1; 
    }

    int top_value = (*stk)->items[(*stk)->top];

    (*stk)->top = (*stk)->top - 1;

    return top_value;
}




    
int main(){
    Stack *stk;
    createAnEmptyStack(&stk);
    push(&stk, 20);
    push(&stk, 30);
    push(&stk, 40);

   // cout << stk->items[stk->top] << endl;

   cout << pop(&stk) << endl;
   cout << pop(&stk) << endl;
   cout << pop(&stk) << endl;
   cout << pop(&stk) << endl;
    
   
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define STACK_MAX 5

typedef struct 
{   int top;
    char data[STACK_MAX];
} Stack;
void push(Stack *s, int item)
{    if( s->top < STACK_MAX)
    {   s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else
    {   cout<<"Don't Overflow"<<endl;
    }
}

int pop(Stack *s)
{   char item;
    if(s->top == 0)
    {   return -1;
    }
    else
    {   s->top = s->top - 1;
        item = s->data[s->top];
    }
    return item;
}

int main()
{   Stack stack;
    int item;
    stack.top = 0;
    char in_ch, in_ch2,in_ch3;
    cout<<"Insert three characters : ";
    cin>>in_ch;
    cin>>in_ch2;
    cin>>in_ch3;

    push(&stack, in_ch );
    push(&stack, in_ch2 );
    push(&stack, in_ch3 );

    //charecter  one delete
    pop(&stack);

    cout<<"Insert two characters : ";
    cin>>in_ch;
    cin>>in_ch2;

    push(&stack, in_ch );
    push(&stack, in_ch2 );

    //charecter one delete
    pop(&stack);

    cout<<"Insert two characters : ";
    cin>>in_ch;
    cin>>in_ch2;

    push(&stack, in_ch );
    push(&stack, in_ch2 );

    //character one delete
    pop(&stack);

    cout<<"Insert one characters : ";
    cin>>in_ch;

    push(&stack, in_ch );
    int chk;
    chk = pop(&stack);
    string str;
    int t = 0;
    while(chk >= 0) 
    {  char cc = chk;
      str += cc;
      chk = pop(&stack);
    }
    int len = str.length();
   for (int i = len-1; i >= 0; --i)
   {    cout<<str[i];
   }  cout<<endl;
    cout<<"Insert one characters : ";
    cin>>in_ch;

    push(&stack, in_ch ); 
    cout<<"Don't overflow"<<endl;
    return 0;    
}
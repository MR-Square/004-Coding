/*
.                    Implementation of  Infix to Postfix
.                                                         Name-Nadaf Zakki Noor Mohammed
.                                                         Roll No.-20CO40
.                                                         Year-2020-2021
.           INFIX notation is the notation commonly used in arithmetical and logical formulae and statements.
.           It is characterized by the placement of operators between operands—"infixed operators"—such as the
.           plus sign in 2 + 2.POSTFIX notation is the collection of operators and operands in which the operator 
.           is placed after the operands. That means, in a postfix expression the operator follows the operands.



*/
#include<stdio.h>
#include<stdlib.h>
#define Max 50
struct stack
{
    char data [Max];
    int top;
};
void push(struct stack *st,char d)
{
    if(st->top==Max-1)
    printf("\n Stack overflows..");
    else
    {
     st->top++;
     st->data[st->top]=d;  
    }
}
char pop(struct stack *st)
{
    if(st->top==-1)
    return -1;
    else
    
       return st->data[st->top--];
    
}
int precedence(char op)
{
switch(op)
{
    case '$':
    case '^':
    return 3;
    case '/':
    case '*':
    return 2;
    case '+':
    case '-':
    return 1;
}
return 0;
}
char *convert(char *expr)
{
int i,j;
char sym,*pexpr,el;
struct stack s;
s.top=-1;
for(i=0;expr[i]!='\0';i++);      //to find length of infix string
pexpr=(char*)malloc(i);
for(i=0,j=0;expr[i]!='\0';i++)
{
    sym=expr[i];
    switch(sym)
    {
        case '(':
        push(&s,sym);
        break;
        case ')':
        while(s.top!=-1 && (el=pop(&s))!='(')
        pexpr[j++]=el;
        break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '$':
        case '^':
        while(s.top!=-1 && precedence(s.data[s.top])>=precedence(sym))
        {
            pexpr[j++]=pop(&s);
        }
        push(&s,sym);
        break;
        default:         //for operand
        pexpr[j++]=sym;

        break;
    }
}
while(s.top!=-1)
pexpr[j++]=pop(&s);
pexpr[j]='\0';   //ascii value of null
return pexpr;
}
int main()
{
    char *infix,*postfix;
    infix=(char*)malloc(1);
    printf("\n Enter the infix expression  ");
    scanf("\n%s",infix);
  postfix=convert(infix);
  printf("\nPostfix exprression is %s",postfix);
}
/*
CONCLUSION:
.            It is one of the application of stack.Using stack we can convert the infix expession to postfix 
.            expression.We have learn if we want to asign a specified amount of memory for an array we can use 
.            malloc function.  
*/
/*
OUTPUT:
.        Enter the infix expression  a+b-cd/e

.        Postfix exprression is ab+cde/-
*/
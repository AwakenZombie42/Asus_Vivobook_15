#include<stdio.h>
#include<math.h>
#define max 10
int stack[max],top=-1;
void push(int item){
    if(top>=max-1){
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top]=item;
}
int pop(){
    int item;
    if(top<0){
        printf("Stack Underflow\n");
        return -1;
    }
    item=stack[top];
    top--;
    return item;
}

int is_operator(char symbol){
    if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='^'){
        return 1;
    }
    return 0;
}
int evaluate(char* expression){
    int i=0;
    int operand2,operand1,result;
    char symbol=expression[i];
    while(symbol!='\0'){
         if(symbol>='0'&&symbol<='9'){
            int num=symbol-'0';
            push(num);
         }
         else if(is_operator(symbol)){
            operand2=pop();
            operand1=pop();
            switch(symbol){
                case '+':
                result=operand1+operand2;
                break;
                case '-':
                result=operand1-operand2;
                break;
                case '*':
                result=operand1*operand2;
                break;
                case '/':
                result=operand1/operand2;
                break;
                case '^':
                result=pow(operand1,operand2);
            }
         }
         else if(symbol!=' '){
            printf("Invalid symbol\n");
            return -1;
         }
    }
}
int main(){
    char expression[]="6 2 3 5 + * +";
    printf("Result:%d\n",evaluate(expression));
    return 0;
}
//
// Created by HP on 2021/1/13.
//

#include <stdio.h>
#include <stdlib.h>

#include <time.h>

#define LEN sizeof
#define ElementType int
#define MAXSIZE 10
#define ERROR system(exit(1))

typedef struct {
    ElementType date[MAXSIZE];
    int top;// 用来指示栈顶在哪个位置
} Stack;

void reversed_First(char *s, int);

void reversed_Second(char *s, int);

Stack *StackCreate();

void Push(Stack *PtrS, ElementType item);

ElementType Pop(Stack *PtrS);

void stackTraversal(Stack *stack);

void test1();

void test2();



int main() {

//    test1();
    test2();

    /*char s[] = "world";
    int len = LEN(s);
    printf("%d\n", len);
    printf("%s\n", s);

    reversed_First(s, len);

    printf("%s\n", s);*/


    return 0;
}

void reversed_First(char *s, int len) {
    for (int left = 0, right = len - 2; left < right; left++, right--) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
    }

}

void reversed_Second(char *s, int len) {

}

void test2(){
    Stack *stack = StackCreate();
    Push(stack, 1);
    Push(stack, 2);
    Push(stack, 3);
    Push(stack, 4);
    Push(stack, 5);
    Push(stack, 6);
    stackTraversal(stack);

}

void test1(){
    Stack *stack = StackCreate();
//    Push(stack,1);
//    Push(stack,2);
    printf("\n%d",Pop(stack));
}

Stack *StackCreate() {
    Stack *p = (Stack *) malloc(sizeof(Stack));//分配新空间
    if (p == NULL)//分配失败
        return 0;
    p->top = -1;//分配成功(但表示现在开始空栈)
    return p;
}

void stackTraversal(Stack *stack){
    printf("stack: ");
    while(stack->top != -1){
        printf("%d, ",Pop(stack));
    }
    printf("\b\b. ");
}

// 入栈
void Push(Stack *PtrS, ElementType item) {
    if (PtrS->top == MAXSIZE - 1) {
        printf("Stack is full\n");
        return;
    } else {
        PtrS->date[++(PtrS->top)] = item;
        return;
    }
}

ElementType Pop(Stack *PtrS) {
    if (PtrS->top == -1) {// 表示堆栈空
        printf("Stack is empty");
        exit(1132);
//        return /*ERROR*/; // ERROR是ElementType的特殊值，标志错误
    } else {
        return (PtrS->date[(PtrS->top)--]);
    }

}















/**
 * Creat by Wakinghours on 2021/1/12
 */

/*
#define MAXX 1e9
clock_t start, stop;

int main() {

    int i = 0;
    int sum,a=10,b=20,c=30,d=40;

    start = clock();
    while(i<MAXX){
//        sum = a*b+c*d*a/b+b/c;
//        sum = ab*cda+
        i++;
    }
    stop = clock();

    printf("%d, %ld",sum, (stop - start)/CLK_TCK);
    return 0;
}*/

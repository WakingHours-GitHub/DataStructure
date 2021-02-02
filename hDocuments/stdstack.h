//
// Created by HP on 2021/1/13.
//

#ifndef DATASTRUCTURE_STDSTACK_H // if not def :如果没有定义这个头文件
#define DATASTRUCTURE_STDSTACK_H // 则定义一下。然后把下面的这些代码通过#include包含过去
                                 // 最后遇到endif结束
                                 // 同理,如果别人包含了我这个头文件，那么第一条则为假。我们也就不往后面做了


#include <stdio.h>
#include <stdlib.h>

#define ElementType int
#define LEN(var) sizeof(var)
//#define LEN 10


// 栈的顺序存储
typedef struct {
    ElementType *date;
    int top; // 头指针
    int bottom; //尾指针
} stack;

stack *stackCreate(int n);
void push(stack *stc, ElementType item) ;
ElementType pop(stack *stc) ;
void stackTraversal(stack *stc);
void emptyAll(stack *stc);


stack *emptyStackCreate(){
    stack *h = (stack *)malloc(LEN(stack));
    if(h == NULL) return NULL;
    else{
        h->top = -1;
    }
}
stack *stackCreate(int n) {
    stack *h = (stack *) malloc(LEN(stack));
    if (h == NULL) // 分配失败
        return NULL;
    else {
        h->top = -1;
        h->bottom = n - 1;
        h->date = (ElementType *) malloc(n * LEN(ElementType));
    }
    return h;

}

void stackTraversal(stack *stc) {
    if(stc->top == -1) {printf("static is empty");return;}
    printf("stack: ");
    while(stc->top != -1){ // 非空就可以继续遍历
        printf("%d, ",pop(stc));
    }
    printf("\b\b");

}

void emptyAll(stack *stc){
//    while(stc->top != -1) pop(stc);

    stc->top = stc->bottom = -1;
}

void push(stack *stc, ElementType item) {
    if (stc->top == stc->bottom) {
        printf("Stack is full\n");
        return;
    } else {
        printf("%d 已入栈\n", item);
        *(stc->date + ++stc->top) = item;
    }
}

ElementType pop(stack *stc) {
    if (stc->top == -1) {// 表示堆栈空
        printf("Stack is empty");
        exit(1132); // 退出程序，返回错误代码
    } else {
        return *(stc->date + stc->top--);
    }
}



#endif //DATASTRUCTURE_STDSTACK_H

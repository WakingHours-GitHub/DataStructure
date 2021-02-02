//
// Created by HP on 2021/1/13.
//

#ifndef DATASTRUCTURE_STDSTACK_H // if not def :���û�ж������ͷ�ļ�
#define DATASTRUCTURE_STDSTACK_H // ����һ�¡�Ȼ����������Щ����ͨ��#include������ȥ
                                 // �������endif����
                                 // ͬ��,������˰����������ͷ�ļ�����ô��һ����Ϊ�١�����Ҳ�Ͳ�����������


#include <stdio.h>
#include <stdlib.h>

#define ElementType int
#define LEN(var) sizeof(var)
//#define LEN 10


// ջ��˳��洢
typedef struct {
    ElementType *date;
    int top; // ͷָ��
    int bottom; //βָ��
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
    if (h == NULL) // ����ʧ��
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
    while(stc->top != -1){ // �ǿվͿ��Լ�������
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
        printf("%d ����ջ\n", item);
        *(stc->date + ++stc->top) = item;
    }
}

ElementType pop(stack *stc) {
    if (stc->top == -1) {// ��ʾ��ջ��
        printf("Stack is empty");
        exit(1132); // �˳����򣬷��ش������
    } else {
        return *(stc->date + stc->top--);
    }
}



#endif //DATASTRUCTURE_STDSTACK_H

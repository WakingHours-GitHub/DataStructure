//
// Created by HP on 2021/1/13.
//

#include <stdio.h>
#include "../../../hDocuments/stdstack.h"

void test1(stack *h);

void test(){
    stack p1;
    p1.top = 3;
    p1.bottom = 5;
    stack p2 = p1;

    printf("&p1 = %p\n",&p1);
    printf("&p2 = %p\n",&p2);

    printf("%d %d\n",p1.top,p1.bottom);
    printf("%d %d\n",p2.top,p2.bottom);
    test1(&p1);

}
void test1(stack *h){
    printf("&h = %p",h);
}

int main(){
    test();


    /*
    stack *h = stackCreate(10);
    push(h,1);
    push(h,2);
    push(h,3);
    push(h,4);
    push(h,5);
    push(h,6);

    emptyAll(h);

    stackTraversal(h);


    /*push(h,1);
    push(h,2);
    push(h,3);
    push(h,4);
    printf("%d",pop(h));
    printf("%d",pop(h));
    printf("%d",pop(h));*/
    return 0;
}
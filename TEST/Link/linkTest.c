//
// Created by HP on 2021/1/18.
//

#include <stdio.h>
#include <stdlib.h>
//#include "stdlink.h"

#define ElementType int
#define LEN(VAR) sizeof(VAR)

typedef struct link{
    ElementType date;
    struct link *next;
}Link;

Link* linkCreat(int n);
Link* linkCreat2(int n);
void linkTraverse(Link *head);

int main() {
    Link  *head = linkCreat(5);

    linkTraverse(head);

    return 0;
}


Link* linkCreat(int n){
    Link *head = NULL, *p1, *p2;
    if(!(p1 = p2 = (Link *) malloc(LEN(struct link)))) exit(-2);// 没有分配成功
    head = p1;
    for(int i = 0; i < n; i++){
        p1->next = malloc(LEN(struct link));
        p1->date = i;
        p2 = p1;
        p1 = p1->next;
    }
    p1->next = NULL;
    return head;
}

Link* linkCreat2(int n){
    Link *head = NULL, *p1, *p2;
    if(!( p1 = p2 = (struct link *)malloc(LEN(Link)))) exit(-2);
    head = p2;
    for(int i = 0; i < n; i++){
        if(!(p1 = (Link *) malloc(LEN(Link)))) exit(-2);
        p2->next = p1;
        p2->date = i;
        p2 = p1;

    }
    // 后面的那个p1（最先，最前面的那个）
    p1->next = NULL;
    return head;
}

void linkTraverse(Link *head){
    Link *p = head;
    if(!p) {printf("link is empty\n");exit(-2);}
    printf("List:");
    while(p -> next!= NULL){
        printf(" %d->",p->date);
        p = p->next;
    }
    printf("\b\b End\n");

}
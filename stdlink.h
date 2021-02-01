//
// Created by HP on 2021/1/18.
//

#ifndef DATASTRUCTURE_STDLINK_H
#define DATASTRUCTURE_STDLINK_H

/**
 * @programing
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define ElementType int
#define LEN(VAR) sizeof(VAR)
#define ERROR 0
#define SUCCEED 1

typedef struct link {
    ElementType date;
    struct link *next;
} Link;

enum {
    FindFirst,
    FindLast
};


Link *linkCreate(int n) ;
void linkTraverse(Link *head);

Link *findSeq(Link *head, unsigned int seq);
Link *findKey(Link *head, ElementType key);

/**
 *
 *线性表的链式存储
 *
 */


Link *linkCreate(int n) {
    Link *head = NULL, *p1 = NULL, *p2 = NULL;
    if (!(p1 = p2 = (Link *) malloc(LEN(Link)))) {
        printf("分配内存失败");
        exit(-2);
    }
    head = p1;
    for (int i = 0; i < n; i++) {
        if (!(p1 = (Link *) malloc(LEN(Link)))) {
            printf("分配内存失败");
            exit(-2);
        }
        p2->next = p1;
        p2->date = i; // 都初始化为零
        p2 = p1;
    }
    p1->next = NULL;
    return head;
}

/**
 * 遍历链表
 *
 * @param head
 */
void linkTraverse(Link *head) {
    if (!head) {
        printf("此链表为空");
        exit(-2);
    }
    Link *p = head;
    printf("List: head -> ");
    while (p->next) {
        printf("%d -> ", p->date);
        p = p->next;
    }
    printf("NULL\n");
}

/**
 * 介绍: 在链表最后加上一个新的节点,并赋予初值
 * @param head
 * @param key
 * @return
 */

int addNode(Link *head, ElementType key) {
    if (!head) return -1; //
    Link *p = head;
    // 当前节点的的next，指向下一个节点的地址
    while (p->next) {
        p = p->next;
    }

//    printf("[%d]",p->date);
    // 此时p指向的是NULL的这个节点
    p->date = key;
    // 随后为p->next（即：下个节点，分配内存）
    if (!(p->next = (Link *) malloc(LEN(Link)))) {
        printf("分配内存失败");
        exit(-1);
    }
    p = p->next;
    p->next = NULL;
}

int deleteNode(Link *head) {
    if (!head) return -1; //表示删除失败
    Link *p = head;
    while (p->next->next) {
        p = p->next;
    }
    p->next = NULL;
    return 1;
}


// 求表长。时间复杂度：O(n)
int length(Link *head) {
    Link *p = head; // 指向链表的第一个节点
    int len;
    for (len = 0; p->next; len++) {
        p = p->next;
    }
    return len;
}

/**
 * 插入函数：
 * 表示在那个链表，在seq序号节点前面，插入key这个元素
 * 链表节点从0开始最大到len-1
 * @param head
 * @param seq
 * @param key
 * @return
 */
int insert(Link *head, unsigned int seq, ElementType key){
    // 表示在头结点之后，第一个节点之前插入节点
    if(!head) return ERROR;
    Link *p = NULL;
    if(seq == 0){
        if(!(p = (Link *)malloc(LEN(Link)))) return ERROR;

        p->date = key;
        p->next = head;
        head = (Link *)&p;

//        printf("----\n");linkTraverse(head);

       /* Link *temp = head;
        p->next = temp;
        temp = p;
        p->date = key;
        head = p;*/

        return  SUCCEED;
    }

    if(!(p = (Link *)malloc(LEN(Link)))) return ERROR;
    Link *temp = findSeq(head, seq - 1);
    p->next = temp->next;
    temp->next = p;
    p->date = key;

    return SUCCEED;



}

// 查找1：（根据序号，找第几个序号的节点）
Link *findSeq(Link *head, unsigned int seq) {
    Link *p = head;
    int i = -1;
    for (i = 0; i < seq && p->next->next != NULL; i++) {
        p = p->next;
    }
    return (i == seq) ? p : NULL;

    /*if(i == seq) return p;//若找到序号为seq的节点，则返回该节点
    else return NULL; // 若没有找到则返回空*/
}


//查找2；（根据值（Key）来查找第几个节点））
Link *findKey(Link *head, ElementType key) {
    Link *p = head;
    while (p) {
        if (p->date == key) {
            return p; // 找到第一个出现key的节点
        }
        p = p->next;
    }
    return NULL;

    // 另一种方案：
    /*while(p!=NULL && p->date != key)
        p = p->next;
    return p;*/
}


#endif //DATASTRUCTURE_STDLINK_H
